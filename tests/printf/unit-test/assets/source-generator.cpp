/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source-generator.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelievr <alelievr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created  2016/12/22 16:20:34 by alelievr          #+#    #+#             */
/*   Updated  2016/12/23 17:41:50 by alelievr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "source-generator.h"

static std::list< intmax_t >		generateRandomNumbers(size_t num, intmax_t mask, bool sup = false)
{
	std::list< intmax_t >	ints;
	intmax_t				r;

	if (sup)
		ints.push_back(NOALIGN);

	for (size_t i = 0; i < num; i++)
	{
		r = ((intmax_t)rand() * (intmax_t)rand()) & mask;
		if (r == 0 || r == NOALIGN)
			r = 42;
		ints.push_back(r);
	}
	return ints;
}

static std::list< std::string >		generateRandomStrings(size_t num)
{
	std::list< std::string >	strs;

	strs.push_back("");

	for (size_t i = 0; i < num; i++)
		strs.push_back(rand_strings[(int)(rand() % (int)(sizeof(rand_strings) / sizeof(char *)))]);
	return strs;
}

static std::list< std::string >			generateRandomChars(size_t num)
{
	std::list< std::string >	chars;
	char						r;

	chars.push_back("\\0");

	while (chars.size() != num)
	{
		r = static_cast< char >(rand());
		if (isprint(r))
			chars.push_back(std::string("") + r);
	}
	return chars;
}

static std::list< std::string >		generateRandomFloats(size_t num)
{
	std::list< std::string >	floats;

//	floats.push_back("NAN");
//	floats.push_back("-INFINITY");
//	floats.push_back("FLT_MIN_EXP");

	for (size_t i = 0; i < num; i++)
		floats.push_back(std::to_string((float)rand() / (float)rand()));
	return floats;
}

static std::list< std::string >		generateModifiers(char convertion)
{
	std::list< std::string >		mods;

	mods.push_back("");
	if (strchr("aAeEfFgGcs", convertion))
		mods.push_back("l");
	if (strchr("idouxXDOU", convertion))
	{
		mods.push_back("ll");
		mods.push_back("h");
		mods.push_back("hh");
		mods.push_back("j");
		mods.push_back("z");
	}
	return mods;
}

static std::map< std::string, std::string > initModMap()
{
	return std::map< std::string, std::string > {
		{"", ""},
		{"l", "(long)"},
		{"ll", "(long long)"},
		{"h", "(short)"},
		{"hh", "(char)"},
		{"j", "(intmax_t)"},
		{"z", "(size_t)"},
		{"lc", "(wint_t)"},
		{"ls", "(wchar_t *)"},
		{"lf", "(double)"},
		{"lF", "(double)"},
		{"la", "(double)"},
		{"lA", "(double)"},
		{"le", "(double)"},
		{"lE", "(double)"},
		{"lg", "(double)"},
		{"lG", "(double)"},
	};
}

static const char					*getCastFromModifier(const std::string & mod, const char convertion)
{
	const static std::map< std::string, std::string > & modMap = initModMap();
	std::string											m = const_cast< std::string & >(mod);

	if (strchr("csfFaAeEgG", convertion))
		m += convertion;
	if (mod.empty())
	{
		if (strchr("id", convertion))
			return ("(int)");
		if (strchr("ouxDOUX", convertion))
			return ("(unsigned int)");
		if (strchr("aAgGeEfF", convertion))
			return ("(double)");
	}
	return (modMap.find(m)->second.c_str());
}

static std::string					generateUniqueFileNmae(char convertion)
{
	std::stringstream		ss;

	for (int i = 0; i < 99; i++)
	{
		ss << OUT_FOLDER << "printf_unit_test_" << convertion << "-" << i << ".c";
		if (access(ss.str().c_str(), F_OK) == 0)
		{
			ss.str("");
			continue ;
		}
		break ;
	}
	return ss.str();
}

static void							generateBasicTests(char convertion, std::string arg)
{
	char				buff[0xF00];
	std::ofstream		ofs;
	std::string			fmt;
	const char			*format;
	const char			*sarg;
	std::string			file_name;
	std::string			file(FILE_HEADER_TEMPLATE);
	static int			g_index[256];

	std::cout << "generating tests for convertion: " << convertion << " with arg: " << arg << std::endl;

	//with padd
	//without padd
	//with align
	//without align
	//with both
	//with string after
	//without string after
	//with string before
	//without string before
	//with both

	for (const char & c1 : PRINTF_FLAGS_BASIC) //first flag
	for (const char & c2 : PRINTF_FLAGS_BASIC) //second flag
	for (const char & c3 : PRINTF_FLAGS_BASIC) //...
	for (const char & c4 : PRINTF_FLAGS_BASIC)
	for (const char & c5 : PRINTF_FLAGS_BASIC)
	for (const intmax_t & align : generateRandomNumbers(2, 0x3F, true)) //align attribute
	for (const intmax_t & padd : generateRandomNumbers(2, 0x3F, true)) //padding attribute
	for (const std::string & modifier : generateModifiers(convertion))
	for (const std::string & prefix : generateRandomStrings(0)) //additional string to format
	for (const std::string & sufix : generateRandomStrings(0)) //additional string to format
	{
		fmt = prefix + "%";
		for (const char & c : {c1, c2, c3, c4, c5})
			if (c && c != NO_FLAG[0])
			{
				if (fmt.find(c) != std::string::npos) //flag duplication, aborting ...
					goto abortCurrentFormat;
				fmt += c;
			}
		//check converter to flag incompat
		for (size_t i = 0; i < sizeof(convertion_to_flag_incompatibilities) / sizeof(char[2]); i++)
			if (convertion == convertion_to_flag_incompatibilities[i][0] && fmt.find(convertion_to_flag_incompatibilities[i][1]) != std::string::npos)
				goto abortCurrentFormat;
		//check flag to flag incompat
		for (size_t i = 0; i < sizeof(flag_to_flag_incompatibilities) / sizeof(char[2]); i++)
			if (fmt.find(flag_to_flag_incompatibilities[i][0]) != std::string::npos && fmt.find(flag_to_flag_incompatibilities[i][1]) != std::string::npos)
				goto abortCurrentFormat;
		if (align != NOALIGN)
			fmt += std::to_string(align);
		if (!strchr("pcCS", convertion) && padd != NOPADD)
			fmt += "." + std::to_string(padd);
		fmt += modifier + convertion + sufix;
		format = fmt.c_str();
		sarg = arg.c_str();
//		ss.str("");
		sprintf(buff, FILE_CONTENT_TEMPLATE,
				convertion,
				g_index[static_cast< int >(convertion)],
				format,
				format, getCastFromModifier(modifier, convertion), sarg,
				format, getCastFromModifier(modifier, convertion), sarg);
		file += buff;
		g_index[static_cast< int >(convertion)]++;
		//std::cout << "created test file with format: \"" << fmt << "\"" << std::endl;
		abortCurrentFormat:
		;
	}
	file_name = generateUniqueFileNmae(convertion);
	ofs.open(file_name, std::ofstream::out | std::ofstream::trunc | std::ofstream::in);
	ofs << file;
	ofs.close();
}

static void							generateTestFiles(const char *convs)
{
	std::string		randint;
	std::string		randptr;
	size_t			ntests = 2;

	for (char c : {'d', 'i', 'o', 'u', 'x', 'X', 'D', 'O', 'U'})
		if (strchr(convs, c))
			for (intmax_t r : generateRandomNumbers(ntests, -1))
			{
				randint = std::to_string(r);
				generateBasicTests(c, randint);
			}
	if (strchr(convs, 'p'))
		for (const char * s : {"(void *)0x42", "(void *)0x7fff9532", "(void *)0x0"})
			generateBasicTests('p', s);
	if (strchr(convs, 's'))
		for (std::string s : generateRandomStrings(ntests))
			generateBasicTests('s', "\"" + s + "\"");
	if (strchr(convs, 'c'))
		for (std::string c : generateRandomChars(ntests))
			generateBasicTests('c', "'" + c + "'");
	for (char c : {'a', 'A', 'e', 'E', 'f', 'F', 'g', 'G'})
		if (strchr(convs, c))
			for (std::string f : generateRandomFloats(ntests - 1))
				generateBasicTests(c, f);
	if (strchr(convs, 'S'))
	{
		generateBasicTests('S', "L\"こんにちは\"");
		generateBasicTests('S', "L\"こんんにちはんにちはんにちはちはにちは\"");
	}
	if (strchr(convs, 'S'))
	{
		generateBasicTests('C', "L\'こ\'");
		generateBasicTests('C', "L\'ん\'");
		generateBasicTests('C', "L\'a\'");
		generateBasicTests('C', "L\'ø\'");
		generateBasicTests('C', "L\'≠\'");
	}
}

static void							remove_dir_files(const char *f)
{
	DIR				*dir;
	struct dirent	*d;
	char			path[0xF0];

	if ((dir = opendir(f)))
	{
		while ((d = readdir(dir)))
		{
			strcpy(path, f);
			strcat(path, "/");
			strcat(path, d->d_name);
			unlink(path);
		}
	}
}

int									main(int ac, char **av)
{
	if (!access(LOCK_FILE, F_OK))
	{
		printf("another source-generator is running, do you really want to run a new instance ? (y/n) ");
		fflush(stdout);
		if (getchar() != 'y')
			return (0);
	}
	open(LOCK_FILE, O_CREAT, 0755);

	mkdir(OUT_FOLDER, 0755);

	//empty the directory:
	remove_dir_files(OUT_FOLDER);

	srand((unsigned)time(NULL) + (unsigned)clock());

	//create all test files
	generateTestFiles(av[1] ? av[1] : "");

	unlink(LOCK_FILE);
	(void)ac;
	return (0);
}
