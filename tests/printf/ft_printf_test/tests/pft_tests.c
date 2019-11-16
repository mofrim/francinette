#include "../header.h"

void test_pft_nacked(void)
{
	ASSERT_PRINTF("hello, world!");
	ASSERT_PRINTF("");
	ASSERT_PRINTF("\t\n\r\v\f\n");
}

void test_pft_percent(void)
{
	ASSERT_PRINTF("%%");
	ASSERT_PRINTF("%5%");
	ASSERT_PRINTF("%-5%");
	ASSERT_PRINTF("%05%");
	ASSERT_PRINTF("%-05%");
}

void test_pft_nocrash(void)
{
	static int ncm_p = 5;
	ASSERT_PRINTF("%");
	ASSERT_PRINTF("%5");
	ASSERT_PRINTF("%05");
	ASSERT_PRINTF("%-05");
	ASSERT_PRINTF("%-5");

	ASSERT_PRINTF("%.4p", &ncm_p);
	ASSERT_PRINTF("%.p", &ncm_p);
//	ASSERT_PRINTF("%#p", &ncm_p);
	ASSERT_PRINTF("%05p", &ncm_p);
	ASSERT_PRINTF("%0p", &ncm_p);
/*	ASSERT_PRINTF("%+p", &ncm_p);
	ASSERT_PRINTF("%+p", &ncm_p);
	ASSERT_PRINTF("% p", &ncm_p);
	ASSERT_PRINTF("% p", &ncm_p);
	ASSERT_PRINTF("%hhp", &ncm_p);
	ASSERT_PRINTF("%hp", &ncm_p);
	ASSERT_PRINTF("%lp", &ncm_p);
	ASSERT_PRINTF("%llp", &ncm_p);
	ASSERT_PRINTF("%Lp", &ncm_p);*/
	ASSERT_PRINTF("%-p", &ncm_p);
/*	ASSERT_PRINTF("%Ld", 42);
	ASSERT_PRINTF("%#d", 42);
	ASSERT_PRINTF("%hhhd", 42);
	ASSERT_PRINTF("%hhhhd", 42);
	ASSERT_PRINTF("%hhld", 42);
	ASSERT_PRINTF("%hhlld", 42);
	ASSERT_PRINTF("%llhd", 42);
	ASSERT_PRINTF("%llld", 42);
	ASSERT_PRINTF("%Li", 42);
	ASSERT_PRINTF("%#i", 42);
	ASSERT_PRINTF("%hhhi", 42);
	ASSERT_PRINTF("%-i", 42);
	ASSERT_PRINTF("%+o", 42);
	ASSERT_PRINTF("% o", 42);
	ASSERT_PRINTF("%Lo", 42);
	ASSERT_PRINTF("%hhho", 42);
	ASSERT_PRINTF("%hhhho", 42);
	ASSERT_PRINTF("%hhlo", 42);
	ASSERT_PRINTF("%hhllo", 42);
	ASSERT_PRINTF("%llho", 42);
	ASSERT_PRINTF("%lllo", 42);
	ASSERT_PRINTF("%-o", 42);
	ASSERT_PRINTF("%Lu", 42);
	ASSERT_PRINTF("%#u", 42);
	ASSERT_PRINTF("%+u", 42);
	ASSERT_PRINTF("% u", 42);
	ASSERT_PRINTF("%hhhu", 42);
	ASSERT_PRINTF("%hhhhu", 42);
	ASSERT_PRINTF("%hhlu", 42);
	ASSERT_PRINTF("%hhllu", 42);
	ASSERT_PRINTF("%llhu", 42);
	ASSERT_PRINTF("%lllu", 42);*/
	ASSERT_PRINTF("%-u", 42);
/*	ASSERT_PRINTF("%Lx", 42);
	ASSERT_PRINTF("%+x", 42);
	ASSERT_PRINTF("% x", 42);
	ASSERT_PRINTF("%hhhx", 42);
	ASSERT_PRINTF("%hhhhx", 42);
	ASSERT_PRINTF("%hhlx", 42);
	ASSERT_PRINTF("%hhllx", 42);
	ASSERT_PRINTF("%llhx", 42);
	ASSERT_PRINTF("%lllx", 42);
	ASSERT_PRINTF("%LX", 42);
	ASSERT_PRINTF("%+X", 42);
	ASSERT_PRINTF("% X", 42);
	ASSERT_PRINTF("%hhhX", 42);
	ASSERT_PRINTF("%llhX", 42);*/
	ASSERT_PRINTF("%-x", 42);
/*	ASSERT_PRINTF("%hhf", 42.5);
	ASSERT_PRINTF("%hf", 42.5);
	ASSERT_PRINTF("%llf", 42.5);
	ASSERT_PRINTF("%lllf", 42.5);
	ASSERT_PRINTF("%llllf", 42.5);
	ASSERT_PRINTF("%LLf", 42.5);
	ASSERT_PRINTF("%Llf", 42.5);
	ASSERT_PRINTF("%lLf", 42.5);
	ASSERT_PRINTF("%-f", 42.5);*/

	ASSERT_PRINTF("%-021s", "abc");
	ASSERT_PRINTF("%-05s", "goes over");
	ASSERT_PRINTF("%04.3s%-7.4s", "hello", "world");
	ASSERT_PRINTF("%021s", NULL);
	ASSERT_PRINTF("%02s", NULL);
	ASSERT_PRINTF("%-021s", NULL);
	ASSERT_PRINTF("%-03s", NULL);
/*	ASSERT_PRINTF("%+u", 5);
	ASSERT_PRINTF("%+u", 5);
	ASSERT_PRINTF("%+u", 4294967295);
	ASSERT_PRINTF("%+5u", 35);
	ASSERT_PRINTF("%+7u", 0);
	ASSERT_PRINTF("%+24u", 4294967295);
	ASSERT_PRINTF("%+.7u", 234);
	ASSERT_PRINTF("%+.3u", 3723);
	ASSERT_PRINTF("%+05u", 432);
	ASSERT_PRINTF("%+04u", 0);
	ASSERT_PRINTF("%+8.5u", 34);
	ASSERT_PRINTF("%+8.5u", 0);
	ASSERT_PRINTF("%+8.3u", 8375);
	ASSERT_PRINTF("%+3.7u", 3267);
	ASSERT_PRINTF("%+3.3u", 6983);
	ASSERT_PRINTF("%+-8.5u", 34);
	ASSERT_PRINTF("%+-8.5u", 0);
	ASSERT_PRINTF("%+-8.3u", 8375);
	ASSERT_PRINTF("%+-3.7u", 3267);
	ASSERT_PRINTF("%+-3.3u", 6983);
	ASSERT_PRINTF("%0+8.5u", 34);
	ASSERT_PRINTF("%0+8.5u", 0);
	ASSERT_PRINTF("%0+8.3u", 8375);
	ASSERT_PRINTF("%0+3.7u", 3267);
	ASSERT_PRINTF("%0+3.3u", 6983);
	ASSERT_PRINTF("%0+-8.5u", 34);
	ASSERT_PRINTF("%0+-8.5u", 0);
	ASSERT_PRINTF("%0+-8.3u", 8375);
	ASSERT_PRINTF("%0+-3.7u", 3267);
	ASSERT_PRINTF("%0+-3.3u", 6983);*/
	ASSERT_PRINTF("%05c", '\0');
	ASSERT_PRINTF("%-05c", '\0');
/*	ASSERT_PRINTF("%+lu", 22337203685477);
	ASSERT_PRINTF("%++d", 42);
	ASSERT_PRINTF("%  d", 42);
	ASSERT_PRINTF("% + d", 42);
	ASSERT_PRINTF("%--5d", 42);
	ASSERT_PRINTF("%-+-5d", 42);
	ASSERT_PRINTF("%##x", 42);
	ASSERT_PRINTF("%#++#-5x", 42);
	ASSERT_PRINTF("%.4c", 'a');*/
	ASSERT_PRINTF("%.c", 'a');
//	ASSERT_PRINTF("%#c", 'a');
	ASSERT_PRINTF("%05c", 'a');
	ASSERT_PRINTF("%0c", 'a');
/*	ASSERT_PRINTF("%+c", 'a');
	ASSERT_PRINTF("%+c", -42);*/
	ASSERT_PRINTF("% c", 'a');
	ASSERT_PRINTF("% c", -42);
/*	ASSERT_PRINTF("%hhc", 'a');
	ASSERT_PRINTF("%hc", 'a');
	ASSERT_PRINTF("%lc", L'a');
	ASSERT_PRINTF("%llc", L'a');
	ASSERT_PRINTF("%Lc", L'a');*/
	ASSERT_PRINTF("%-c", 'a');
//	ASSERT_PRINTF("%#s", "hello");
	ASSERT_PRINTF("%05s", "hello");
	ASSERT_PRINTF("%0s", "hello");
/*	ASSERT_PRINTF("%+s", "hello");
	ASSERT_PRINTF("% s", "hello");
	ASSERT_PRINTF("%hhs", "hello");
	ASSERT_PRINTF("%hs", "hello");
	ASSERT_PRINTF("%ls", L"hello");
	ASSERT_PRINTF("%lls", L"hello");
	ASSERT_PRINTF("%Ls", L"hello");*/
	ASSERT_PRINTF("%-s", "hello");

//	ASSERT_PRINTF("%1$");
	ASSERT_PRINTF("%0");
//	ASSERT_PRINTF("% ");
//	ASSERT_PRINTF("%#");
	ASSERT_PRINTF("%-");
//	ASSERT_PRINTF("%+");
	ASSERT_PRINTF("%23");
	ASSERT_PRINTF("%.");
/*	ASSERT_PRINTF("%hh");
	ASSERT_PRINTF("%h");
	ASSERT_PRINTF("%ll");
	ASSERT_PRINTF("%l");
	ASSERT_PRINTF("%L");*/
	ASSERT_PRINTF("%p");
	ASSERT_PRINTF("%d");
	ASSERT_PRINTF("%u");
	ASSERT_PRINTF("%x");
	ASSERT_PRINTF("%X");
//	ASSERT_PRINTF("%f");
	ASSERT_PRINTF("%c");
/*	ASSERT_PRINTF("%o");
	ASSERT_PRINTF("%1$s", NULL);*/
	ASSERT_PRINTF("%0s", NULL);
/*	ASSERT_PRINTF("% s", NULL);
	ASSERT_PRINTF("%#s", NULL);*/
	ASSERT_PRINTF("%-s", NULL);
//	ASSERT_PRINTF("%+s", NULL);
	ASSERT_PRINTF("%23s", NULL);
	ASSERT_PRINTF("%.s", NULL);
/*	ASSERT_PRINTF("%hhs", NULL);
	ASSERT_PRINTF("%hs", NULL);
	ASSERT_PRINTF("%lls", NULL);
	ASSERT_PRINTF("%ls", NULL);
	ASSERT_PRINTF("%Ls", NULL);*/
	ASSERT_PRINTF("%p", NULL);
	ASSERT_PRINTF("%d", NULL);
//	ASSERT_PRINTF("%b", NULL);
	ASSERT_PRINTF("%u", NULL);
	ASSERT_PRINTF("%x", NULL);
	ASSERT_PRINTF("%X", NULL);
//	ASSERT_PRINTF("%f", NULL);
	ASSERT_PRINTF("%s", NULL);
	ASSERT_PRINTF("%c", NULL);
//	ASSERT_PRINTF("%o", NULL);
}

void test_pft_string(void)
{
	ASSERT_PRINTF("hello, %s.", "gavin");
	ASSERT_PRINTF("%s", "testing testing");
	ASSERT_PRINTF("%s%s", "hello", "world");
	ASSERT_PRINTF("..%s stuff %s", "a", "b");
	ASSERT_PRINTF("this %s is empty", "");
	ASSERT_PRINTF("this %s is %s", "hello", "");
	ASSERT_PRINTF("this %s is %s", "", "hello");
	ASSERT_PRINTF("%s%s%s", "1", "2", "3's a charm");

	ASSERT_PRINTF("%32s", "abc");
	ASSERT_PRINTF("%16s", "nark nark");
	ASSERT_PRINTF("%5s", "goes over");
	ASSERT_PRINTF("%-32s", "abc");
	ASSERT_PRINTF("%-16s", "nark nark");
	ASSERT_PRINTF("%-5s", "goes over");
	ASSERT_PRINTF("%.7s", "hello");
	ASSERT_PRINTF("%.3s", "hello");
	ASSERT_PRINTF("%.s", "hello");
	ASSERT_PRINTF("%.0s", "hello");
	ASSERT_PRINTF("%.3s%.2s", "holla", "bitch");
	ASSERT_PRINTF("%.2s%.7s", "hello", "world");
	ASSERT_PRINTF("%.7s%.2s", "hello", "world");
	ASSERT_PRINTF("%.5s%7s", "yo", "boi");
	ASSERT_PRINTF("%7.5s", "yolo");
	ASSERT_PRINTF("%7.5s", "bombastic");
	ASSERT_PRINTF("%-7.5s", "yolo");
	ASSERT_PRINTF("%-7.5s", "tubular");
	ASSERT_PRINTF("%7.7s%7.7s", "hello", "world");
	ASSERT_PRINTF("%3.7s%7.7s", "hello", "world");
	ASSERT_PRINTF("%7.7s%3.7s", "hello", "world");
	ASSERT_PRINTF("%3.7s%3.7s", "hello", "world");
	ASSERT_PRINTF("%7.3s%7.7s", "hello", "world");
	ASSERT_PRINTF("%3.3s%7.7s", "hello", "world");
	ASSERT_PRINTF("%7.3s%3.7s", "hello", "world");
	ASSERT_PRINTF("%3.3s%3.7s", "hello", "world");
	ASSERT_PRINTF("%7.7s%7.3s", "hello", "world");
	ASSERT_PRINTF("%3.7s%7.3s", "hello", "world");
	ASSERT_PRINTF("%7.7s%3.3s", "hello", "world");
	ASSERT_PRINTF("%3.7s%3.3s", "hello", "world");
	ASSERT_PRINTF("%7.3s%7.3s", "hello", "world");
	ASSERT_PRINTF("%3.3s%7.3s", "hello", "world");
	ASSERT_PRINTF("%7.3s%3.3s", "hello", "world");
	ASSERT_PRINTF("%3.3s%3.3s", "hello", "world");
	ASSERT_PRINTF("%3s%3s", "hello", "world");
	ASSERT_PRINTF("%-7s%5s", "hello", "world");
	ASSERT_PRINTF("%7s%-5s", "hello", "world");
	ASSERT_PRINTF("hello, %s.", NULL);
	ASSERT_PRINTF("%s", NULL);
	ASSERT_PRINTF("%32s", NULL);
	ASSERT_PRINTF("%2s", NULL);
	ASSERT_PRINTF("%-32s", NULL);
	ASSERT_PRINTF("%-16s", NULL);
	ASSERT_PRINTF("%-3s", NULL);
	ASSERT_PRINTF("%.9s", "NULL");
	ASSERT_PRINTF("%.3s", "NULL");
	ASSERT_PRINTF("%.s", "NULL");
	ASSERT_PRINTF("%.0s", "NULL");

	static char *s_hidden = "hi low\0don't print me lol\0";
	ASSERT_PRINTF("%s", s_hidden);
	ASSERT_PRINTF("%3s", s_hidden);
	ASSERT_PRINTF("%9s", s_hidden);
	ASSERT_PRINTF("%.s", s_hidden);
	ASSERT_PRINTF("%.9s", s_hidden);
	ASSERT_PRINTF("%.03s", s_hidden);
	ASSERT_PRINTF("%.09s", s_hidden);
	ASSERT_PRINTF("%.03s", NULL);
	ASSERT_PRINTF("%.09s", NULL);
	ASSERT_PRINTF("%.00s", "\0");
	ASSERT_PRINTF("%.01s", "\0");
	ASSERT_PRINTF("%.03s", "\0");
	ASSERT_PRINTF("%.09s", "\0");
	ASSERT_PRINTF("%3.s", s_hidden);
	ASSERT_PRINTF("%10.s", s_hidden);
	ASSERT_PRINTF("%3.s", NULL);
	ASSERT_PRINTF("%10.s", NULL);
	ASSERT_PRINTF("%1.s", "\0");
	ASSERT_PRINTF("%2.s", "\0");
	ASSERT_PRINTF("%9.s", "\0");
	ASSERT_PRINTF("%-3.s", s_hidden);
	ASSERT_PRINTF("%-8.s", s_hidden);
	ASSERT_PRINTF("%-3.s", NULL);
	ASSERT_PRINTF("%-8.s", NULL);
	ASSERT_PRINTF("%-1.s", "\0");
	ASSERT_PRINTF("%-2.s", "\0");
	ASSERT_PRINTF("%-6.s", "\0");
	ASSERT_PRINTF("%3.1s", s_hidden);
	ASSERT_PRINTF("%10.1s", s_hidden);
	ASSERT_PRINTF("%3.1s", NULL);
	ASSERT_PRINTF("%9.1s", NULL);
	ASSERT_PRINTF("%-3.1s", s_hidden);
	ASSERT_PRINTF("%-10.1s", s_hidden);
	ASSERT_PRINTF("%-3.1s", NULL);
	ASSERT_PRINTF("%-9.1s", NULL);
	ASSERT_PRINTF("%-3.1s", "\0");
	ASSERT_PRINTF("%-6.1s", "\0");
	ASSERT_PRINTF("%3.6s", s_hidden);
	ASSERT_PRINTF("%20.6s", s_hidden);
	ASSERT_PRINTF("%3.6s", NULL);
	ASSERT_PRINTF("%20.6s", NULL);
	ASSERT_PRINTF("%3.6s", "\0");
	ASSERT_PRINTF("%6.6s", "\0");
	ASSERT_PRINTF("%-3.6s", s_hidden);
	ASSERT_PRINTF("%-20.6s", s_hidden);
	ASSERT_PRINTF("%-3.8s", s_hidden);
	ASSERT_PRINTF("%-10.8s", s_hidden);
	ASSERT_PRINTF("%-3.8s", NULL);
	ASSERT_PRINTF("%-10.8s", NULL);
	ASSERT_PRINTF("%-.00s", s_hidden);
	ASSERT_PRINTF("%-.09s", s_hidden);
/*	ASSERT_PRINTF("%+- 06.06s", s_hidden);
	ASSERT_PRINTF("% 0+-6.06s", s_hidden);
	ASSERT_PRINTF("%0 +-6.06s", s_hidden);
	ASSERT_PRINTF("%+-0 6.06s", s_hidden);
	ASSERT_PRINTF("%-+ 06.06s", s_hidden);
	ASSERT_PRINTF("% -+06.06s", s_hidden);
	ASSERT_PRINTF("%+- 07.06s", s_hidden);
	ASSERT_PRINTF("% 0+-8.06s", s_hidden);
	ASSERT_PRINTF("%0 +-9.06s", s_hidden);
	ASSERT_PRINTF("%+-0 10.06s", s_hidden);
	ASSERT_PRINTF("%-+ 011.06s", s_hidden);
	ASSERT_PRINTF("% -+012.06s", s_hidden);
	ASSERT_PRINTF("%+- 06.04s", s_hidden);
	ASSERT_PRINTF("% 0+-6.04s", s_hidden);
	ASSERT_PRINTF("%0 +-6.04s", s_hidden);
	ASSERT_PRINTF("%+-0 6.04s", s_hidden);
	ASSERT_PRINTF("%-+ 06.04s", s_hidden);
	ASSERT_PRINTF("% 0-+6.04s", s_hidden);
	ASSERT_PRINTF("%+- 06.09s", s_hidden);
	ASSERT_PRINTF("% 0+-6.09s", s_hidden);
	ASSERT_PRINTF("%0 +-6.09s", s_hidden);
	ASSERT_PRINTF("%+-0 6.09s", s_hidden);
	ASSERT_PRINTF("%-+ 06.09s", s_hidden);
	ASSERT_PRINTF("% 0-+6.09s", s_hidden);*/
	ASSERT_PRINTF("%00s", s_hidden);
	ASSERT_PRINTF("%000s", s_hidden);
	ASSERT_PRINTF("%0000s", s_hidden);
	ASSERT_PRINTF("%-00s", s_hidden);
	ASSERT_PRINTF("%0-0s", s_hidden);
	ASSERT_PRINTF("%00-s", s_hidden);
	ASSERT_PRINTF("%03s", s_hidden);
	ASSERT_PRINTF("%09s", s_hidden);
/*	ASSERT_PRINTF("%+03s", s_hidden);
	ASSERT_PRINTF("%+09s", s_hidden);*/
	ASSERT_PRINTF("%-03s", s_hidden);
	ASSERT_PRINTF("%-09s", s_hidden);
/*	ASSERT_PRINTF("%+ 3s", s_hidden);
	ASSERT_PRINTF("%+ 6s", s_hidden);*/
}

void test_pft_int_i(void)
{
	ASSERT_PRINTF("this %i number", 17);
	ASSERT_PRINTF("this %i number", -267);
	ASSERT_PRINTF("this %i number", 0);
	ASSERT_PRINTF("%i", 3);
	ASSERT_PRINTF("%i", -1);
	ASSERT_PRINTF("%i", 0);
	ASSERT_PRINTF("this %d number", 17);
	ASSERT_PRINTF("this %d number", -267);
	ASSERT_PRINTF("this %d number", 0);
	ASSERT_PRINTF("%i",  2147483647);
	ASSERT_PRINTF("%i", (int)(-2147483678));
/*	ASSERT_PRINTF("%+i", 5);
	ASSERT_PRINTF("%+i", -7);
	ASSERT_PRINTF("%+i", 2147483647);*/
	ASSERT_PRINTF("%7i", 33);
	ASSERT_PRINTF("%7i", -14);
	ASSERT_PRINTF("%3i", 0);
	ASSERT_PRINTF("%5i", 52625);
	ASSERT_PRINTF("%5i", -2562);
	ASSERT_PRINTF("%4i", 94827);
	ASSERT_PRINTF("%4i", -2464);
	ASSERT_PRINTF("%-7i", 33);
	ASSERT_PRINTF("%-7i", -14);
	ASSERT_PRINTF("%-3i", 0);
	ASSERT_PRINTF("%-5i", 52625);
	ASSERT_PRINTF("%-5i", -2562);
	ASSERT_PRINTF("%-4i", 94827);
	ASSERT_PRINTF("%-4i", -2464);
/*	ASSERT_PRINTF("%+5i", 35);
	ASSERT_PRINTF("%+7i", 0);
	ASSERT_PRINTF("%+24i", 2147483647);*/
	ASSERT_PRINTF("%.5i", 2);
	ASSERT_PRINTF("%.6i", -3);
	ASSERT_PRINTF("%.3i", 0);
	ASSERT_PRINTF("%.4i", 5263);
	ASSERT_PRINTF("%.4i", -2372);
	ASSERT_PRINTF("%.3i", 13862);
	ASSERT_PRINTF("%.3i",-23646);
/*	ASSERT_PRINTF("%+.7i", 234);
	ASSERT_PRINTF("%+.7i", -446);
	ASSERT_PRINTF("%+.3i", 3723);*/
	ASSERT_PRINTF("%05i", 43);
	ASSERT_PRINTF("%07i", -54);
	ASSERT_PRINTF("%03i", 0);
	ASSERT_PRINTF("%03i", 634);
	ASSERT_PRINTF("%04i", -532);
	ASSERT_PRINTF("%04i", -4825);
/*	ASSERT_PRINTF("%+05i", 432);
	ASSERT_PRINTF("%+04i", 0);*/
	ASSERT_PRINTF("%8.5i", 34);
	ASSERT_PRINTF("%10.5i", -216);
	ASSERT_PRINTF("%8.5i", 0);
	ASSERT_PRINTF("%8.3i", 8375);
	ASSERT_PRINTF("%8.3i", -8473);
	ASSERT_PRINTF("%3.7i", 3267);
	ASSERT_PRINTF("%3.7i", -2375);
	ASSERT_PRINTF("%3.3i", 6983);
	ASSERT_PRINTF("%3.3i", -8462);
	ASSERT_PRINTF("%-8.5i", 34);
	ASSERT_PRINTF("%-10.5i", -216);
	ASSERT_PRINTF("%-8.5i", 0);
	ASSERT_PRINTF("%-8.3i", 8375);
	ASSERT_PRINTF("%-8.3i", -8473);
	ASSERT_PRINTF("%-3.7i", 3267);
	ASSERT_PRINTF("%-3.7i", -2375);
	ASSERT_PRINTF("%-3.3i", 6983);
	ASSERT_PRINTF("%-3.3i", -8462);
/*	ASSERT_PRINTF("%+8.5i", 34);
	ASSERT_PRINTF("%+10.5i", -216);
	ASSERT_PRINTF("%+8.5i", 0);
	ASSERT_PRINTF("%+8.3i", 8375);
	ASSERT_PRINTF("%+8.3i", -8473);
	ASSERT_PRINTF("%+3.7i", 3267);
	ASSERT_PRINTF("%+3.7i", -2375);
	ASSERT_PRINTF("%+3.3i", 6983);
	ASSERT_PRINTF("%+3.3i", -8462);
	ASSERT_PRINTF("%+-8.5i", 34);
	ASSERT_PRINTF("%+-10.5i", -216);
	ASSERT_PRINTF("%+-8.5i", 0);
	ASSERT_PRINTF("%+-8.3i", 8375);
	ASSERT_PRINTF("%+-8.3i", -8473);
	ASSERT_PRINTF("%+-3.7i", 3267);
	ASSERT_PRINTF("%+-3.7i", -2375);
	ASSERT_PRINTF("%+-3.3i", 6983);
	ASSERT_PRINTF("%+-3.3i", -8462);*/
	ASSERT_PRINTF("%08.5i", 34);
	ASSERT_PRINTF("%010.5i", -216);
	ASSERT_PRINTF("%08.5i", 0);
	ASSERT_PRINTF("%08.3i", 8375);
	ASSERT_PRINTF("%08.3i", -8473);
	ASSERT_PRINTF("%03.7i", 3267);
	ASSERT_PRINTF("%03.7i", -2375);
	ASSERT_PRINTF("%03.3i", 6983);
	ASSERT_PRINTF("%03.3i", -8462);
	ASSERT_PRINTF("%0-8.5i", 34);
	ASSERT_PRINTF("%0-10.5i", -216);
	ASSERT_PRINTF("%0-8.5i", 0);
	ASSERT_PRINTF("%0-8.3i", 8375);
	ASSERT_PRINTF("%0-8.3i", -8473);
	ASSERT_PRINTF("%0-3.7i", 3267);
	ASSERT_PRINTF("%0-3.7i", -2375);
	ASSERT_PRINTF("%0-3.3i", 6983);
	ASSERT_PRINTF("%0-3.3i", -8462);
/*	ASSERT_PRINTF("%0+8.5i", 34);
	ASSERT_PRINTF("%0+10.5i", -216);
	ASSERT_PRINTF("%0+8.5i", 0);
	ASSERT_PRINTF("%0+8.3i", 8375);
	ASSERT_PRINTF("%0+8.3i", -8473);
	ASSERT_PRINTF("%0+3.7i", 3267);
	ASSERT_PRINTF("%0+3.7i", -2375);
	ASSERT_PRINTF("%0+3.3i", 6983);
	ASSERT_PRINTF("%0+3.3i", -8462);
	ASSERT_PRINTF("%0+-8.5i", 34);
	ASSERT_PRINTF("%0+-10.5i", -216);
	ASSERT_PRINTF("%0+-8.5i", 0);
	ASSERT_PRINTF("%0+-8.3i", 8375);
	ASSERT_PRINTF("%0+-8.3i", -8473);
	ASSERT_PRINTF("%0+-3.7i", 3267);
	ASSERT_PRINTF("%0+-3.7i", -2375);
	ASSERT_PRINTF("%0+-3.3i", 6983);
	ASSERT_PRINTF("%0+-3.3i", -8462);*/
	static char 		ch_pos_1 = 100, ch_neg_1 = -87;
	static short		sh_pos_1 = 3047, sh_neg_1 = -8875;
	static int			i_pos_1 = 878023;
	static long		l_pos_1 = 22337203685477, l_neg_1 = -22337203685477;
	static long long	ll_pos_1 = 22337203685477, ll_neg_1 = -22337203685477;
	static long		lmax	= 9223372036854775807;
	static long		lmin	= -9223372036854775807;
	static long long llmax = 9223372036854775807;
	static long long	llmin = -9223372036854775807ll;
/*	ASSERT_PRINTF("%hhi", (char)45);
	ASSERT_PRINTF("%hhi", (char)-45);
	ASSERT_PRINTF("%hi", (short)385);
	ASSERT_PRINTF("%hi", (short)-385);
	ASSERT_PRINTF("%li", (long)32);
	ASSERT_PRINTF("%li", (long)-32);
	ASSERT_PRINTF("%lli", (long long)43);
	ASSERT_PRINTF("%lli", (long long)-43);
	ASSERT_PRINTF("%hhi", ch_pos_1);
	ASSERT_PRINTF("%hhi", ch_neg_1);
	ASSERT_PRINTF("%hi", sh_pos_1);
	ASSERT_PRINTF("%hi", sh_neg_1);
	ASSERT_PRINTF("%li", l_pos_1);
	ASSERT_PRINTF("%li", lmax);
	ASSERT_PRINTF("%lli", llmax);
	ASSERT_PRINTF("%li", l_neg_1);
	ASSERT_PRINTF("%lli", ll_pos_1);
	ASSERT_PRINTF("%lli", ll_neg_1);
	ASSERT_PRINTF("%li", 22337203685477);
	ASSERT_PRINTF("%li", -22337203685477);
	ASSERT_PRINTF("%lli", 522337203685470ll);
	ASSERT_PRINTF("%lli", -522337203685470ll);
	ASSERT_PRINTF("%lli", 9223372036854775807ll);
	ASSERT_PRINTF("%lli", llmin);
	ASSERT_PRINTF("%li", 9223372036854775807l);
	ASSERT_PRINTF("%li", lmin);
	ASSERT_PRINTF("%hi", (short)32767);
	ASSERT_PRINTF("%hi", (short)(-32768));
	ASSERT_PRINTF("%hhi", (char)127);
	ASSERT_PRINTF("%hhi", (char)(-128));
	ASSERT_PRINTF("%037li", 22337203685477l);
	ASSERT_PRINTF("%.37li", -22337203685477l);
	ASSERT_PRINTF("%37lli", 522337203685470ll);
	ASSERT_PRINTF("%-37lli", -522337203685470ll);
	ASSERT_PRINTF("%+li", 22337203685477l);
	ASSERT_PRINTF("[%i] [%i]", i_pos_1, i_pos_1);
	ASSERT_PRINTF("[%i] [%li]", i_pos_1, l_pos_1);
	ASSERT_PRINTF("[%i] [%lli]", i_pos_1, ll_pos_1);
	ASSERT_PRINTF("[%i] [%hi]", i_pos_1, sh_pos_1);
	ASSERT_PRINTF("[%i] [%hhi]", i_pos_1, ch_pos_1);
	ASSERT_PRINTF("%lli%hhi%lli", ll_pos_1, ch_neg_1, ll_neg_1);
	ASSERT_PRINTF("%hi%li%hhi", sh_pos_1, l_neg_1, ch_neg_1);
	ASSERT_PRINTF("%li%hhi%hi", l_neg_1, ch_pos_1, sh_pos_1);
	ASSERT_PRINTF("%i%lli%hhi", i_pos_1, ll_neg_1, ch_pos_1);
	ASSERT_PRINTF("%lli%i%li", ll_neg_1, i_pos_1, l_pos_1);*/
/*	ASSERT_PRINTF("this % i number", 17);
	ASSERT_PRINTF("this % i number", -267);
	ASSERT_PRINTF("this % i number", 0);
	ASSERT_PRINTF("% i", 3);
	ASSERT_PRINTF("% i", -1);
	ASSERT_PRINTF("% i", 0);
	ASSERT_PRINTF("this % d number", 17);
	ASSERT_PRINTF("this % d number", -267);
	ASSERT_PRINTF("this % d number", 0);
	ASSERT_PRINTF("% i", 2147483647);
	ASSERT_PRINTF("% i", (int)(-2147483678));
	ASSERT_PRINTF("% +i", 5);
	ASSERT_PRINTF("% +i", -7);
	ASSERT_PRINTF("% +i", 2147483647);
	ASSERT_PRINTF("% 7i", 33);
	ASSERT_PRINTF("% 7i", -14);
	ASSERT_PRINTF("% 3i", 0);
	ASSERT_PRINTF("% 5i", 52625);
	ASSERT_PRINTF("% 5i", -2562);
	ASSERT_PRINTF("% 4i", 94827);
	ASSERT_PRINTF("% 4i", -2464);
	ASSERT_PRINTF("% -7i", 33);
	ASSERT_PRINTF("% -7i", -14);
	ASSERT_PRINTF("% -3i", 0);
	ASSERT_PRINTF("% -5i", 52625);
	ASSERT_PRINTF("% -5i", -2562);
	ASSERT_PRINTF("% -4i", 94827);
	ASSERT_PRINTF("% -4i", -2464);
	ASSERT_PRINTF("% +5i", 35);
	ASSERT_PRINTF("% +7i", 0);
	ASSERT_PRINTF("% +24i", 2147483647);
	ASSERT_PRINTF("% .5i", 2);
	ASSERT_PRINTF("% .6i", -3);
	ASSERT_PRINTF("% .3i", 0);
	ASSERT_PRINTF("% .4i", 5263);
	ASSERT_PRINTF("% .4i", -2372);
	ASSERT_PRINTF("% .3i", 13862);
	ASSERT_PRINTF("% .3i",-23646);
	ASSERT_PRINTF("% +.7i", 234);
	ASSERT_PRINTF("% +.7i", -446);
	ASSERT_PRINTF("% +.3i", 3723);
	ASSERT_PRINTF("% 05i", 43);
	ASSERT_PRINTF("% 07i", -54);
	ASSERT_PRINTF("% 03i", 0);
	ASSERT_PRINTF("% 03i", 634);
	ASSERT_PRINTF("% 04i", -532);
	ASSERT_PRINTF("% 04i", -4825);
	ASSERT_PRINTF("% +05i", 432);
	ASSERT_PRINTF("% +04i", 0);
	ASSERT_PRINTF("% 8.5i", 34);
	ASSERT_PRINTF("% 10.5i", -216);
	ASSERT_PRINTF("% 8.5i", 0);
	ASSERT_PRINTF("% 8.3i", 8375);
	ASSERT_PRINTF("% 8.3i", -8473);
	ASSERT_PRINTF("% 3.7i", 3267);
	ASSERT_PRINTF("% 3.7i", -2375);
	ASSERT_PRINTF("% 3.3i", 6983);
	ASSERT_PRINTF("% 3.3i", -8462);
	ASSERT_PRINTF("% -8.5i", 34);
	ASSERT_PRINTF("% -10.5i", -216);
	ASSERT_PRINTF("% -8.5i", 0);
	ASSERT_PRINTF("% -8.3i", 8375);
	ASSERT_PRINTF("% -8.3i", -8473);
	ASSERT_PRINTF("% -3.7i", 3267);
	ASSERT_PRINTF("% -3.7i", -2375);
	ASSERT_PRINTF("% -3.3i", 6983);
	ASSERT_PRINTF("% -3.3i", -8462);
	ASSERT_PRINTF("% +8.5i", 34);
	ASSERT_PRINTF("% +10.5i", -216);
	ASSERT_PRINTF("% +8.5i", 0);
	ASSERT_PRINTF("% +8.3i", 8375);
	ASSERT_PRINTF("% +8.3i", -8473);
	ASSERT_PRINTF("% +3.7i", 3267);
	ASSERT_PRINTF("% +3.7i", -2375);
	ASSERT_PRINTF("% +3.3i", 6983);
	ASSERT_PRINTF("% +3.3i", -8462);
	ASSERT_PRINTF("% +-8.5i", 34);
	ASSERT_PRINTF("% +-10.5i", -216);
	ASSERT_PRINTF("% +-8.5i", 0);
	ASSERT_PRINTF("% +-8.3i", 8375);
	ASSERT_PRINTF("% +-8.3i", -8473);
	ASSERT_PRINTF("% +-3.7i", 3267);
	ASSERT_PRINTF("% +-3.7i", -2375);
	ASSERT_PRINTF("% +-3.3i", 6983);
	ASSERT_PRINTF("% +-3.3i", -8462);
	ASSERT_PRINTF("% 08.5i", 34);
	ASSERT_PRINTF("% 010.5i", -216);
	ASSERT_PRINTF("% 08.5i", 0);
	ASSERT_PRINTF("% 08.3i", 8375);
	ASSERT_PRINTF("% 08.3i", -8473);
	ASSERT_PRINTF("% 03.7i", 3267);
	ASSERT_PRINTF("% 03.7i", -2375);
	ASSERT_PRINTF("% 03.3i", 6983);
	ASSERT_PRINTF("% 03.3i", -8462);
	ASSERT_PRINTF("% 0-8.5i", 34);
	ASSERT_PRINTF("% 0-10.5i", -216);
	ASSERT_PRINTF("% 0-8.5i", 0);
	ASSERT_PRINTF("% 0-8.3i", 8375);
	ASSERT_PRINTF("% 0-8.3i", -8473);
	ASSERT_PRINTF("% 0-3.7i", 3267);
	ASSERT_PRINTF("% 0-3.7i", -2375);
	ASSERT_PRINTF("% 0-3.3i", 6983);
	ASSERT_PRINTF("% 0-3.3i", -8462);
	ASSERT_PRINTF("% 0+8.5i", 34);
	ASSERT_PRINTF("% 0+10.5i", -216);
	ASSERT_PRINTF("% 0+8.5i", 0);
	ASSERT_PRINTF("% 0+8.3i", 8375);
	ASSERT_PRINTF("% 0+8.3i", -8473);
	ASSERT_PRINTF("% 0+3.7i", 3267);
	ASSERT_PRINTF("% 0+3.7i", -2375);
	ASSERT_PRINTF("% 0+3.3i", 6983);
	ASSERT_PRINTF("% 0+3.3i", -8462);
	ASSERT_PRINTF("% 0+-8.5i", 34);
	ASSERT_PRINTF("% 0+-10.5i", -216);
	ASSERT_PRINTF("% 0+-8.5i", 0);
	ASSERT_PRINTF("% 0+-8.3i", 8375);
	ASSERT_PRINTF("% 0+-8.3i", -8473);
	ASSERT_PRINTF("% 0+-3.7i", 3267);
	ASSERT_PRINTF("% 0+-3.7i", -2375);
	ASSERT_PRINTF("% 0+-3.3i", 6983);
	ASSERT_PRINTF("% 0+-3.3i", -8462);
	ASSERT_PRINTF("% hhi", (char)45);
	ASSERT_PRINTF("% hhi", (char)-45);
	ASSERT_PRINTF("% hi", (short)385);
	ASSERT_PRINTF("% hi", (short)-385);
	ASSERT_PRINTF("% li", (long)32);
	ASSERT_PRINTF("% li", (long)-32);
	ASSERT_PRINTF("% lli", (long long)43);
	ASSERT_PRINTF("% lli", (long long)-43);
	ASSERT_PRINTF("% hhi", ch_pos_1);
	ASSERT_PRINTF("% hhi", ch_neg_1);
	ASSERT_PRINTF("% hi", sh_pos_1);
	ASSERT_PRINTF("% hi", sh_neg_1);
	ASSERT_PRINTF("% li", l_pos_1);
	ASSERT_PRINTF("% li", l_neg_1);
	ASSERT_PRINTF("% lli", ll_pos_1);
	ASSERT_PRINTF("% lli", ll_neg_1);
	ASSERT_PRINTF("% li", 22337203685477l);
	ASSERT_PRINTF("% li", -22337203685477l);
	ASSERT_PRINTF("% lli", 522337203685470ll);
	ASSERT_PRINTF("% lli", -522337203685470ll);
	ASSERT_PRINTF("% lli", 9223372036854775807ll);
	ASSERT_PRINTF("% lli", llmin);
	ASSERT_PRINTF("% li", 9223372036854775807l);
	ASSERT_PRINTF("% li", lmin);
	ASSERT_PRINTF("% hi", (short)32767);
	ASSERT_PRINTF("% hi", (short)(-32768));
	ASSERT_PRINTF("% hhi", (char)(127));
	ASSERT_PRINTF("% hhi", (char)(-128));*/
	ASSERT_PRINTF("%.0i", 0);
	ASSERT_PRINTF("%.i", 0);
	ASSERT_PRINTF("%5.0i", 0);
	ASSERT_PRINTF("%5.i", 0);
	ASSERT_PRINTF("%-5.0i", 0);
	ASSERT_PRINTF("%-5.i", 0);
/*	ASSERT_PRINTF("%+.0i", 0);
	ASSERT_PRINTF("%+.i", 0);
	ASSERT_PRINTF("%+5.0i", 0);
	ASSERT_PRINTF("%+5.i", 0);
	ASSERT_PRINTF("%+-5.0i", 0);
	ASSERT_PRINTF("%+-5.i", 0);
	ASSERT_PRINTF("%hhi", -129);
	ASSERT_PRINTF("%hhi", 128);
	ASSERT_PRINTF("%hi", 32768);
	ASSERT_PRINTF("%hi", -32769);*/
}

void test_pft_int_d(void)
{
/*	ASSERT_PRINTF("this %d number", 17);
	ASSERT_PRINTF("this %d number", -267);
	ASSERT_PRINTF("this %d number", 0);*/
	ASSERT_PRINTF("%d", 3);
	ASSERT_PRINTF("%d", -1);
	ASSERT_PRINTF("%d", 0);
	ASSERT_PRINTF("%d",  2147483647);
	ASSERT_PRINTF("%d", (int)(-2147483678));
/*	ASSERT_PRINTF("%+d", 5);
	ASSERT_PRINTF("%+d", -7);
	ASSERT_PRINTF("%+d", 2147483647);*/
	ASSERT_PRINTF("%7d", 33);
	ASSERT_PRINTF("%7d", -14);
	ASSERT_PRINTF("%3d", 0);
	ASSERT_PRINTF("%5d", 52625);
	ASSERT_PRINTF("%5d", -2562);
	ASSERT_PRINTF("%4d", 94827);
	ASSERT_PRINTF("%4d", -2464);
	ASSERT_PRINTF("%-7d", 33);
	ASSERT_PRINTF("%-7d", -14);
	ASSERT_PRINTF("%-3d", 0);
	ASSERT_PRINTF("%-5d", 52625);
	ASSERT_PRINTF("%-5d", -2562);
	ASSERT_PRINTF("%-4d", 94827);
	ASSERT_PRINTF("%-4d", -2464);
/*	ASSERT_PRINTF("%+5d", 35);
	ASSERT_PRINTF("%+7d", 0);
	ASSERT_PRINTF("%+24d", 2147483647);*/
	ASSERT_PRINTF("%.5d", 2);
	ASSERT_PRINTF("%.6d", -3);
	ASSERT_PRINTF("%.3d", 0);
	ASSERT_PRINTF("%.4d", 5263);
	ASSERT_PRINTF("%.4d", -2372);
	ASSERT_PRINTF("%.3d", 13862);
	ASSERT_PRINTF("%.3d",-23646);
/*	ASSERT_PRINTF("%+.7d", 234);
	ASSERT_PRINTF("%+.7d", -446);
	ASSERT_PRINTF("%+.3d", 3723);*/
	ASSERT_PRINTF("%05d", 43);
	ASSERT_PRINTF("%07d", -54);
	ASSERT_PRINTF("%03d", 0);
	ASSERT_PRINTF("%03d", 634);
	ASSERT_PRINTF("%04d", -532);
	ASSERT_PRINTF("%04d", -4825);
/*	ASSERT_PRINTF("%+05d", 432);
	ASSERT_PRINTF("%+04d", 0);*/
	ASSERT_PRINTF("%8.5d", 34);
	ASSERT_PRINTF("%10.5d", -216);
	ASSERT_PRINTF("%8.5d", 0);
	ASSERT_PRINTF("%8.3d", 8375);
	ASSERT_PRINTF("%8.3d", -8473);
	ASSERT_PRINTF("%3.7d", 3267);
	ASSERT_PRINTF("%3.7d", -2375);
	ASSERT_PRINTF("%3.3d", 6983);
	ASSERT_PRINTF("%3.3d", -8462);
	ASSERT_PRINTF("%-8.5d", 34);
	ASSERT_PRINTF("%-10.5d", -216);
	ASSERT_PRINTF("%-8.5d", 0);
	ASSERT_PRINTF("%-8.3d", 8375);
	ASSERT_PRINTF("%-8.3d", -8473);
	ASSERT_PRINTF("%-3.7d", 3267);
	ASSERT_PRINTF("%-3.7d", -2375);
	ASSERT_PRINTF("%-3.3d", 6983);
	ASSERT_PRINTF("%-3.3d", -8462);
/*	ASSERT_PRINTF("%+8.5d", 34);
	ASSERT_PRINTF("%+10.5d", -216);
	ASSERT_PRINTF("%+8.5d", 0);
	ASSERT_PRINTF("%+8.3d", 8375);
	ASSERT_PRINTF("%+8.3d", -8473);
	ASSERT_PRINTF("%+3.7d", 3267);
	ASSERT_PRINTF("%+3.7d", -2375);
	ASSERT_PRINTF("%+3.3d", 6983);
	ASSERT_PRINTF("%+3.3d", -8462)*/;

	static char             ch_pos_1 = 100, ch_neg_1 = -87;
	static short            sh_pos_1 = 3047, sh_neg_1 = -8875;
	static int                      i_pos_1 = 878023;
	static long             l_pos_1 = 22337203685477, l_neg_1 = -22337203685477;
	static long long        ll_pos_1 = 22337203685477, ll_neg_1 = -22337203685477;
	static long             lmax    = 9223372036854775807;
	static long             lmin    = -9223372036854775807;
	static long long llmax = 9223372036854775807;
	static long long        llmin = -9223372036854775807ll;

/*	ASSERT_PRINTF("%+-8.5d", 34);
	ASSERT_PRINTF("%+-10.5d", -216);
	ASSERT_PRINTF("%+-8.5d", 0);
	ASSERT_PRINTF("%+-8.3d", 8375);
	ASSERT_PRINTF("%+-8.3d", -8473);
	ASSERT_PRINTF("%+-3.7d", 3267);
	ASSERT_PRINTF("%+-3.7d", -2375);
	ASSERT_PRINTF("%+-3.3d", 6983);
	ASSERT_PRINTF("%+-3.3d", -8462);*/
	ASSERT_PRINTF("%08.5d", 34);
	ASSERT_PRINTF("%010.5d", -216);
	ASSERT_PRINTF("%08.5d", 0);
	ASSERT_PRINTF("%08.3d", 8375);
	ASSERT_PRINTF("%08.3d", -8473);
	ASSERT_PRINTF("%03.7d", 3267);
	ASSERT_PRINTF("%03.7d", -2375);
	ASSERT_PRINTF("%03.3d", 6983);
	ASSERT_PRINTF("%03.3d", -8462);
	ASSERT_PRINTF("%0-8.5d", 34);
	ASSERT_PRINTF("%0-10.5d", -216);
	ASSERT_PRINTF("%0-8.5d", 0);
	ASSERT_PRINTF("%0-8.3d", 8375);
	ASSERT_PRINTF("%0-8.3d", -8473);
	ASSERT_PRINTF("%0-3.7d", 3267);
	ASSERT_PRINTF("%0-3.7d", -2375);
	ASSERT_PRINTF("%0-3.3d", 6983);
	ASSERT_PRINTF("%0-3.3d", -8462);
/*	ASSERT_PRINTF("%0+8.5d", 34);
	ASSERT_PRINTF("%0+10.5d", -216);
	ASSERT_PRINTF("%0+8.5d", 0);
	ASSERT_PRINTF("%0+8.3d", 8375);
	ASSERT_PRINTF("%0+8.3d", -8473);
	ASSERT_PRINTF("%0+3.7d", 3267);
	ASSERT_PRINTF("%0+3.7d", -2375);
	ASSERT_PRINTF("%0+3.3d", 6983);
	ASSERT_PRINTF("%0+3.3d", -8462);
	ASSERT_PRINTF("%0+-8.5d", 34);
	ASSERT_PRINTF("%0+-10.5d", -216);
	ASSERT_PRINTF("%0+-8.5d", 0);
	ASSERT_PRINTF("%0+-8.3d", 8375);
	ASSERT_PRINTF("%0+-8.3d", -8473);
	ASSERT_PRINTF("%0+-3.7d", 3267);
	ASSERT_PRINTF("%0+-3.7d", -2375);
	ASSERT_PRINTF("%0+-3.3d", 6983);
	ASSERT_PRINTF("%0+-3.3d", -8462);
	ASSERT_PRINTF("%hhd", (char)45);
	ASSERT_PRINTF("%hhd", (char)-45);
	ASSERT_PRINTF("%hd", (short)385);
	ASSERT_PRINTF("%hd", (short)-385);
	ASSERT_PRINTF("%ld", (long)32);
	ASSERT_PRINTF("%ld", (long)-32);
	ASSERT_PRINTF("%lld", (long long)43);
	ASSERT_PRINTF("%lld", (long long)-43);
	ASSERT_PRINTF("%hhd", ch_pos_1);
	ASSERT_PRINTF("%hhd", ch_neg_1);
	ASSERT_PRINTF("%hd", sh_pos_1);
	ASSERT_PRINTF("%hd", sh_neg_1);
	ASSERT_PRINTF("%ld", l_pos_1);
	ASSERT_PRINTF("%ld", lmax);
	ASSERT_PRINTF("%lld", llmax);
	ASSERT_PRINTF("%ld", l_neg_1);
	ASSERT_PRINTF("%lld", ll_pos_1);
	ASSERT_PRINTF("%lld", ll_neg_1);
	ASSERT_PRINTF("%ld", 22337203685477);
	ASSERT_PRINTF("%ld", -22337203685477);
	ASSERT_PRINTF("%lld", 522337203685470ll);
	ASSERT_PRINTF("%lld", -522337203685470ll);
	ASSERT_PRINTF("%lld", 9223372036854775807ll);
	ASSERT_PRINTF("%lld", llmin);
	ASSERT_PRINTF("%ld", 9223372036854775807l);
	ASSERT_PRINTF("%ld", lmin);
	ASSERT_PRINTF("%hd", (short)32767);
	ASSERT_PRINTF("%hd", (short)(-32768));
	ASSERT_PRINTF("%hhd", (char)127);
	ASSERT_PRINTF("%hhd", (char)(-128));
	ASSERT_PRINTF("%037ld", 22337203685477l);
	ASSERT_PRINTF("%.37ld", -22337203685477l);
	ASSERT_PRINTF("%37lld", 522337203685470ll);
	ASSERT_PRINTF("%-37lld", -522337203685470ll);
	ASSERT_PRINTF("%+ld", 22337203685477l);*/

	ASSERT_PRINTF("[%d] [%d]", i_pos_1, i_pos_1);
/*	ASSERT_PRINTF("[%d] [%ld]", i_pos_1, l_pos_1);
	ASSERT_PRINTF("[%d] [%lld]", i_pos_1, ll_pos_1);
	ASSERT_PRINTF("[%d] [%hd]", i_pos_1, sh_pos_1);
	ASSERT_PRINTF("[%d] [%hhd]", i_pos_1, ch_pos_1);
	ASSERT_PRINTF("%lld%hhd%lld", ll_pos_1, ch_neg_1, ll_neg_1);
	ASSERT_PRINTF("%hd%ld%hhd", sh_pos_1, l_neg_1, ch_neg_1);
	ASSERT_PRINTF("%ld%hhd%hd", l_neg_1, ch_pos_1, sh_pos_1);
	ASSERT_PRINTF("%d%lld%hhd", i_pos_1, ll_neg_1, ch_pos_1);
	ASSERT_PRINTF("%lli%d%ld", ll_neg_1, i_pos_1, l_pos_1);
	ASSERT_PRINTF("this % d number", 17);
	ASSERT_PRINTF("this % d number", -267);
	ASSERT_PRINTF("this % d number", 0);
	ASSERT_PRINTF("% d", 3);
	ASSERT_PRINTF("% d", -1);
	ASSERT_PRINTF("% d", 0);
	ASSERT_PRINTF("this % d number", 17);
	ASSERT_PRINTF("this % d number", -267);
	ASSERT_PRINTF("this % d number", 0);
	ASSERT_PRINTF("% d", 2147483647);
	ASSERT_PRINTF("% d", (int)(-2147483678));
	ASSERT_PRINTF("% +d", 5);
	ASSERT_PRINTF("% +d", -7);
	ASSERT_PRINTF("% +d", 2147483647);
	ASSERT_PRINTF("% 7d", 33);
	ASSERT_PRINTF("% 7d", -14);
	ASSERT_PRINTF("% 3d", 0);
	ASSERT_PRINTF("% 5d", 52625);
	ASSERT_PRINTF("% 5d", -2562);
	ASSERT_PRINTF("% 4d", 94827);
	ASSERT_PRINTF("% 4d", -2464);
	ASSERT_PRINTF("% -7d", 33);
	ASSERT_PRINTF("% -7d", -14);
	ASSERT_PRINTF("% -3d", 0);
	ASSERT_PRINTF("% -5d", 52625);
	ASSERT_PRINTF("% -5d", -2562);
	ASSERT_PRINTF("% -4d", 94827);
	ASSERT_PRINTF("% -4d", -2464);
	ASSERT_PRINTF("% +5d", 35);
	ASSERT_PRINTF("% +7d", 0);
	ASSERT_PRINTF("% +24d", 2147483647);
	ASSERT_PRINTF("% .5d", 2);
	ASSERT_PRINTF("% .6d", -3);
	ASSERT_PRINTF("% .3d", 0);
	ASSERT_PRINTF("% .4d", 5263);
	ASSERT_PRINTF("% .4d", -2372);
	ASSERT_PRINTF("% .3d", 13862);
	ASSERT_PRINTF("% .3d",-23646);
	ASSERT_PRINTF("% +.7d", 234);
	ASSERT_PRINTF("% +.7d", -446);
	ASSERT_PRINTF("% +.3d", 3723);
	ASSERT_PRINTF("% 05d", 43);
	ASSERT_PRINTF("% 07d", -54);
	ASSERT_PRINTF("% 03d", 0);
	ASSERT_PRINTF("% 03d", 634);
	ASSERT_PRINTF("% 04d", -532);
	ASSERT_PRINTF("% 04d", -4825);
	ASSERT_PRINTF("% +05d", 432);
	ASSERT_PRINTF("% +04d", 0);
	ASSERT_PRINTF("% 8.5d", 34);
	ASSERT_PRINTF("% 10.5d", -216);
	ASSERT_PRINTF("% 8.5d", 0);
	ASSERT_PRINTF("% 8.3d", 8375);
	ASSERT_PRINTF("% 8.3d", -8473);
	ASSERT_PRINTF("% 3.7d", 3267);
	ASSERT_PRINTF("% 3.7d", -2375);
	ASSERT_PRINTF("% 3.3d", 6983);
	ASSERT_PRINTF("% 3.3d", -8462);
	ASSERT_PRINTF("% -8.5d", 34);
	ASSERT_PRINTF("% -10.5d", -216);
	ASSERT_PRINTF("% -8.5d", 0);
	ASSERT_PRINTF("% -8.3d", 8375);
	ASSERT_PRINTF("% -8.3d", -8473);
	ASSERT_PRINTF("% -3.7d", 3267);
	ASSERT_PRINTF("% -3.7d", -2375);
	ASSERT_PRINTF("% -3.3d", 6983);
	ASSERT_PRINTF("% -3.3d", -8462);

	ASSERT_PRINTF("% +8.5d", 34);
	ASSERT_PRINTF("% +10.5d", -216);
	ASSERT_PRINTF("% +8.5d", 0);
	ASSERT_PRINTF("% +8.3d", 8375);
	ASSERT_PRINTF("% +8.3d", -8473);
	ASSERT_PRINTF("% +3.7d", 3267);
	ASSERT_PRINTF("% +3.7d", -2375);
	ASSERT_PRINTF("% +3.3d", 6983);
	ASSERT_PRINTF("% +3.3d", -8462);
	ASSERT_PRINTF("% +-8.5d", 34);
	ASSERT_PRINTF("% +-10.5d", -216);
	ASSERT_PRINTF("% +-8.5d", 0);
	ASSERT_PRINTF("% +-8.3d", 8375);
	ASSERT_PRINTF("% +-8.3d", -8473);
	ASSERT_PRINTF("% +-3.7d", 3267);
	ASSERT_PRINTF("% +-3.7d", -2375);
	ASSERT_PRINTF("% +-3.3d", 6983);
	ASSERT_PRINTF("% +-3.3d", -8462);
	ASSERT_PRINTF("% 08.5d", 34);
	ASSERT_PRINTF("% 010.5d", -216);
	ASSERT_PRINTF("% 08.5d", 0);
	ASSERT_PRINTF("% 08.3d", 8375);
	ASSERT_PRINTF("% 08.3d", -8473);
	ASSERT_PRINTF("% 03.7d", 3267);
	ASSERT_PRINTF("% 03.7d", -2375);
	ASSERT_PRINTF("% 03.3d", 6983);
	ASSERT_PRINTF("% 03.3d", -8462);
	ASSERT_PRINTF("% 0-8.5d", 34);
	ASSERT_PRINTF("% 0-10.5d", -216);
	ASSERT_PRINTF("% 0-8.5d", 0);
	ASSERT_PRINTF("% 0-8.3d", 8375);
	ASSERT_PRINTF("% 0-8.3d", -8473);
	ASSERT_PRINTF("% 0-3.7d", 3267);
	ASSERT_PRINTF("% 0-3.7d", -2375);
	ASSERT_PRINTF("% 0-3.3d", 6983);
	ASSERT_PRINTF("% 0-3.3d", -8462);
	ASSERT_PRINTF("% 0+8.5d", 34);
	ASSERT_PRINTF("% 0+10.5d", -216);
	ASSERT_PRINTF("% 0+8.5d", 0);
	ASSERT_PRINTF("% 0+8.3d", 8375);
	ASSERT_PRINTF("% 0+8.3d", -8473);
	ASSERT_PRINTF("% 0+3.7d", 3267);
	ASSERT_PRINTF("% 0+3.7d", -2375);
	ASSERT_PRINTF("% 0+3.3d", 6983);
	ASSERT_PRINTF("% 0+3.3d", -8462);
	ASSERT_PRINTF("% 0+-8.5d", 34);
	ASSERT_PRINTF("% 0+-10.5d", -216);
	ASSERT_PRINTF("% 0+-8.5d", 0);
	ASSERT_PRINTF("% 0+-8.3d", 8375);
	ASSERT_PRINTF("% 0+-8.3d", -8473);
	ASSERT_PRINTF("% 0+-3.7d", 3267);
	ASSERT_PRINTF("% 0+-3.7d", -2375);
	ASSERT_PRINTF("% 0+-3.3d", 6983);
	ASSERT_PRINTF("% 0+-3.3d", -8462);
	ASSERT_PRINTF("% hhd", (char)45);
	ASSERT_PRINTF("% hhd", (char)-45);
	ASSERT_PRINTF("% hd", (short)385);
	ASSERT_PRINTF("% hd", (short)-385);
	ASSERT_PRINTF("% ld", (long)32);
	ASSERT_PRINTF("% ld", (long)-32);
	ASSERT_PRINTF("% lld", (long long)43);
	ASSERT_PRINTF("% lld", (long long)-43);
	ASSERT_PRINTF("% hhd", ch_pos_1);
	ASSERT_PRINTF("% hhd", ch_neg_1);
	ASSERT_PRINTF("% hd", sh_pos_1);
	ASSERT_PRINTF("% hd", sh_neg_1);
	ASSERT_PRINTF("% ld", l_pos_1);
	ASSERT_PRINTF("% ld", l_neg_1);
	ASSERT_PRINTF("% lld", ll_pos_1);
	ASSERT_PRINTF("% lld", ll_neg_1);
	ASSERT_PRINTF("% ld", 22337203685477l);
	ASSERT_PRINTF("% ld", -22337203685477l);
	ASSERT_PRINTF("% lld", 522337203685470ll);
	ASSERT_PRINTF("% lld", -522337203685470ll);
	ASSERT_PRINTF("% lld", 9223372036854775807ll);
	ASSERT_PRINTF("% lld", llmin);
	ASSERT_PRINTF("% ld", 9223372036854775807l);
	ASSERT_PRINTF("% ld", lmin);
	ASSERT_PRINTF("% hd", (short)32767);
	ASSERT_PRINTF("% hd", (short)(-32768));


	ASSERT_PRINTF("% hhd", (char)(127));
	ASSERT_PRINTF("% hhd", (char)(-128));*/
	ASSERT_PRINTF("%.0d", 0);
	ASSERT_PRINTF("%.d", 0);
	ASSERT_PRINTF("%5.0d", 0);
	ASSERT_PRINTF("%5.d", 0);
	ASSERT_PRINTF("%-5.0d", 0);
	ASSERT_PRINTF("%-5.d", 0);
/*	ASSERT_PRINTF("%+.0d", 0);
	ASSERT_PRINTF("%+.d", 0);
	ASSERT_PRINTF("%+5.0d", 0);
	ASSERT_PRINTF("%+5.d", 0);
	ASSERT_PRINTF("%+-5.0d", 0);
	ASSERT_PRINTF("%+-5.d", 0);*/
}

void test_ptf_uint(void)
{
	ASSERT_PRINTF("this %u number", 17);
	ASSERT_PRINTF("this %u number", 0);
	ASSERT_PRINTF("%u", 3);
	ASSERT_PRINTF("%u", 4294967295u);
	ASSERT_PRINTF("%7u", 33);
	ASSERT_PRINTF("%3u", 0);
	ASSERT_PRINTF("%5u", 52625);
	ASSERT_PRINTF("%4u", 94827);
	ASSERT_PRINTF("%-7u", 33);
	ASSERT_PRINTF("%-3u", 0);
	ASSERT_PRINTF("%-5u", 52625);
	ASSERT_PRINTF("%-4u", 94827);
	ASSERT_PRINTF("%.5u", 2);
	ASSERT_PRINTF("%.3u", 0);
	ASSERT_PRINTF("%.4u", 5263);
	ASSERT_PRINTF("%.3u", 13862);
	ASSERT_PRINTF("%05u", 43);
	ASSERT_PRINTF("%03u", 0);
	ASSERT_PRINTF("%03u", 634);
	ASSERT_PRINTF("%8.5u", 34);
	ASSERT_PRINTF("%8.5u", 0);
	ASSERT_PRINTF("%8.3u", 8375);
	ASSERT_PRINTF("%3.7u", 3267);
	ASSERT_PRINTF("%3.3u", 6983);
	ASSERT_PRINTF("%-8.5u", 34);
	ASSERT_PRINTF("%-8.5u", 0);
	ASSERT_PRINTF("%-8.3u", 8375);
	ASSERT_PRINTF("%-3.7u", 3267);
	ASSERT_PRINTF("%-3.3u", 6983);
	ASSERT_PRINTF("%08.5u", 34);
	ASSERT_PRINTF("%08.5u", 0);
	ASSERT_PRINTF("%08.3u", 8375);
	ASSERT_PRINTF("%03.7u", 3267);
	ASSERT_PRINTF("%03.3u", 6983);
	ASSERT_PRINTF("%0-8.5u", 34);
	ASSERT_PRINTF("%0-8.5u", 0);
	ASSERT_PRINTF("%0-8.3u", 8375);
	ASSERT_PRINTF("%0-3.7u", 3267);
	ASSERT_PRINTF("%0-3.3u", 6983);
	static unsigned char            uch_pos_1 = 100;
	static unsigned short           ush_pos_1 = 3047;
	static unsigned int             ui_pos_1 = 878023;
	static unsigned long            ul_pos_1 = 22337203685477;
	static unsigned long long       ull_pos_1 = 22337203685477;
	static unsigned long long  ullmax = 9223372036854775807;
	static unsigned long            ulmax = 9223372036854775807;
/*	ASSERT_PRINTF("%hhu", (unsigned char)45);
	ASSERT_PRINTF("%hu", (unsigned short)385);
	ASSERT_PRINTF("%lu", (unsigned long)32);
	ASSERT_PRINTF("%llu", (unsigned long long)43);
	ASSERT_PRINTF("%hhu", uch_pos_1);
	ASSERT_PRINTF("%hu", ush_pos_1);
	ASSERT_PRINTF("%lu", ul_pos_1);
	ASSERT_PRINTF("%llu", ull_pos_1);
	ASSERT_PRINTF("%lu", 22337203685477ul);
	ASSERT_PRINTF("%llu", 522337203685470ull);
	ASSERT_PRINTF("%llu", ullmax);
	ASSERT_PRINTF("%lu", ulmax);
	ASSERT_PRINTF("%hu", (unsigned short)65535);
	ASSERT_PRINTF("%hhu", (unsigned char)255);
	ASSERT_PRINTF("%037lu", 22337203685477ul);
	ASSERT_PRINTF("%37llu", 522337203685470ull);
	ASSERT_PRINTF("%llu%hhu%llu", ull_pos_1, uch_pos_1, ull_pos_1);
	ASSERT_PRINTF("%hu%lu%hhu", ush_pos_1, ul_pos_1, uch_pos_1);
	ASSERT_PRINTF("%lu%hhu%hu", ul_pos_1, uch_pos_1, ush_pos_1);
	ASSERT_PRINTF("%u%llu%hhu", ui_pos_1, ull_pos_1, uch_pos_1);
	ASSERT_PRINTF("%llu%u%lu", ull_pos_1, ui_pos_1, ul_pos_1);*/

	ASSERT_PRINTF("%.0u", 0);
	ASSERT_PRINTF("%.u", 0);
	ASSERT_PRINTF("%5.0u", 0);
	ASSERT_PRINTF("%5.u", 0);
	ASSERT_PRINTF("%-5.0u", 0);
	ASSERT_PRINTF("%-5.u", 0);
}

void test_ptf_hex_low(void)
{
	static unsigned char            uch_pos_1 = 100;
	static unsigned short           ush_pos_1 = 3047;
	static unsigned int             ui_pos_1 = 878023;
	static unsigned long            ul_pos_1 = 22337203685477;
	static unsigned long long       ull_pos_1 = 22337203685477;
	static unsigned long long  ullmax = 9223372036854775807;
	static unsigned long            ulmax = 9223372036854775807;
	ASSERT_PRINTF("this %x number", 17);
	ASSERT_PRINTF("this %x number", 0);
	ASSERT_PRINTF("%x", 3);
	ASSERT_PRINTF("%x", 4294967295u);
	ASSERT_PRINTF("%7x", 33);
	ASSERT_PRINTF("%3x", 0);
	ASSERT_PRINTF("%5x", 52625);
	ASSERT_PRINTF("%2x", 94827);
	ASSERT_PRINTF("%-7x", 33);
	ASSERT_PRINTF("%-3x", 0);
	ASSERT_PRINTF("%-5x", 52625);
	ASSERT_PRINTF("%-4x", 9648627);
	ASSERT_PRINTF("%.5x", 21);
	ASSERT_PRINTF("%.3x", 0);
	ASSERT_PRINTF("%.4x", 5263);
	ASSERT_PRINTF("%.3x", 938862);
	ASSERT_PRINTF("%05x", 43);
	ASSERT_PRINTF("%03x", 0);
	ASSERT_PRINTF("%03x", 698334);
	ASSERT_PRINTF("%8.5x", 34);
	ASSERT_PRINTF("%8.5x", 0);
	ASSERT_PRINTF("%8.3x", 8375);
	ASSERT_PRINTF("%2.7x", 3267);
	ASSERT_PRINTF("%3.3x", 6983);
	ASSERT_PRINTF("%-8.5x", 34);
	ASSERT_PRINTF("%-8.5x", 0);
	ASSERT_PRINTF("%-8.3x", 8375);
	ASSERT_PRINTF("%-2.7x", 3267);
	ASSERT_PRINTF("%-3.3x", 6983);
	ASSERT_PRINTF("%08.5x", 34);
	ASSERT_PRINTF("%08.5x", 0);
	ASSERT_PRINTF("%08.3x", 8375);
	ASSERT_PRINTF("%02.7x", 3267);
	ASSERT_PRINTF("%03.3x", 6983);
	ASSERT_PRINTF("%0-8.5x", 34);
	ASSERT_PRINTF("%0-8.5x", 0);
	ASSERT_PRINTF("%0-8.3x", 8375);
	ASSERT_PRINTF("%0-2.7x", 3267);
	ASSERT_PRINTF("%0-3.3x", 6983);
/*	ASSERT_PRINTF("%hhx", (unsigned char)45);
	ASSERT_PRINTF("%hx", (unsigned short)385);
	ASSERT_PRINTF("%lx", (unsigned long)32);
	ASSERT_PRINTF("%llx", (long long)43);
	ASSERT_PRINTF("%hhx", uch_pos_1);
	ASSERT_PRINTF("%hx", ush_pos_1);
	ASSERT_PRINTF("%lx", ul_pos_1);
	ASSERT_PRINTF("%llx", ull_pos_1);
	ASSERT_PRINTF("%lx", 22337203685477ul);
	ASSERT_PRINTF("%llx", 522337203685470ull);
	ASSERT_PRINTF("%llx", ullmax);
	ASSERT_PRINTF("%lx", ulmax);
	ASSERT_PRINTF("%hx", (unsigned short)65535);
	ASSERT_PRINTF("%hhx", (unsigned char)255);
	ASSERT_PRINTF("%037lx", 22337203685477ul);
	ASSERT_PRINTF("%37llx", 522337203685470ull);
	ASSERT_PRINTF("%llu%hhu%llx", ull_pos_1, uch_pos_1, ull_pos_1);
	ASSERT_PRINTF("%hu%lu%hhx", ush_pos_1, ul_pos_1, uch_pos_1);
	ASSERT_PRINTF("%lu%hhu%hx", ul_pos_1, uch_pos_1, ush_pos_1);
	ASSERT_PRINTF("%u%llu%hhx", ui_pos_1, ull_pos_1, uch_pos_1);
	ASSERT_PRINTF("%llu%u%lx", ull_pos_1, ui_pos_1, ul_pos_1);
	ASSERT_PRINTF("%#x", 4294967295u);
	ASSERT_PRINTF("%#7x", 33);
	ASSERT_PRINTF("%#3x", 0);
	ASSERT_PRINTF("%#5x", 52625);
	ASSERT_PRINTF("%#2x", 94827);
	ASSERT_PRINTF("%#-7x", 33);
	ASSERT_PRINTF("%#-3x", 0);
	ASSERT_PRINTF("%#-5x", 52625);
	ASSERT_PRINTF("%#-4x", 9648627);
	ASSERT_PRINTF("%#.5x", 21);
	ASSERT_PRINTF("%#.3x", 0);
	ASSERT_PRINTF("%#.4x", 5263);
	ASSERT_PRINTF("%#.3x", 938862);
	ASSERT_PRINTF("%#05x", 43);
	ASSERT_PRINTF("%#03x", 0);
	ASSERT_PRINTF("%#03x", 698334);
	ASSERT_PRINTF("%#8.5x", 34);
	ASSERT_PRINTF("%#8.5x", 0);
	ASSERT_PRINTF("%#8.3x", 8375);
	ASSERT_PRINTF("%#2.7x", 3267);
	ASSERT_PRINTF("%#3.3x", 6983);
	ASSERT_PRINTF("%#-8.5x", 34);
	ASSERT_PRINTF("%#-8.5x", 0);
	ASSERT_PRINTF("%#-8.3x", 8375);
	ASSERT_PRINTF("%#-2.7x", 3267);
	ASSERT_PRINTF("%#-3.3x", 6983);
	ASSERT_PRINTF("%#08.5x", 34);
	ASSERT_PRINTF("%#08.5x", 0);
	ASSERT_PRINTF("%#08.3x", 8375);
	ASSERT_PRINTF("%#02.7x", 3267);
	ASSERT_PRINTF("%#03.3x", 6983);
	ASSERT_PRINTF("%#0-8.5x", 34);
	ASSERT_PRINTF("%#0-8.5x", 0);
	ASSERT_PRINTF("%#0-8.3x", 8375);
	ASSERT_PRINTF("%#0-2.7x", 3267);
	ASSERT_PRINTF("%#0-3.3x", 6983);
	ASSERT_PRINTF("%#hhx", (unsigned char)45);
	ASSERT_PRINTF("%#hx", (unsigned short)385);
	ASSERT_PRINTF("%#lx", (unsigned long)32);
	ASSERT_PRINTF("%#llx", (long long)43);
	ASSERT_PRINTF("%#hhx", uch_pos_1);
	ASSERT_PRINTF("%#hx", ush_pos_1);
	ASSERT_PRINTF("%#lx", ul_pos_1);
	ASSERT_PRINTF("%#llx", ull_pos_1);
	ASSERT_PRINTF("%#lx", 22337203685477lu);
	ASSERT_PRINTF("%#llx", 522337203685470llu);
	ASSERT_PRINTF("%#llx", ullmax);
	ASSERT_PRINTF("%#lx", ulmax);
	ASSERT_PRINTF("%#hx", (unsigned short)65535);
	ASSERT_PRINTF("%#hhx", (unsigned char)255);
	ASSERT_PRINTF("%#037lx", 22337203685477ul);
	ASSERT_PRINTF("%#37llx", 522337203685470ull);
	ASSERT_PRINTF("%llu%hhu%#llx", ull_pos_1, uch_pos_1, ull_pos_1);
	ASSERT_PRINTF("%hu%#lx%hhx", ush_pos_1, ul_pos_1, uch_pos_1);
	ASSERT_PRINTF("%lu%hhu%#hx", ul_pos_1, uch_pos_1, ush_pos_1);
	ASSERT_PRINTF("%#x%llu%hhx", ui_pos_1, ull_pos_1, uch_pos_1);
	ASSERT_PRINTF("%llu%u%#lx", ull_pos_1, ui_pos_1, ul_pos_1);*/
	ASSERT_PRINTF("%.0x", 0);
	ASSERT_PRINTF("%.x", 0);
	ASSERT_PRINTF("%5.0x", 0);
	ASSERT_PRINTF("%5.x", 0);
	ASSERT_PRINTF("%-5.0x", 0);
	ASSERT_PRINTF("%-5.x", 0);
/*	ASSERT_PRINTF("%#.0x", 0);
	ASSERT_PRINTF("%#.x", 0);
	ASSERT_PRINTF("%#5.0x", 0);
	ASSERT_PRINTF("%#5.x", 0);
	ASSERT_PRINTF("%#-5.0x", 0);
	ASSERT_PRINTF("%#-5.x", 0);*/
	ASSERT_PRINTF("this %x number", 17);
	ASSERT_PRINTF("this %x number", 0);
	ASSERT_PRINTF("%x", 3);
	ASSERT_PRINTF("%x", 4294967295u);
	ASSERT_PRINTF("%7x", 33);
	ASSERT_PRINTF("%3x", 0);
	ASSERT_PRINTF("%5x", 52625);
	ASSERT_PRINTF("%2x", 94827);
	ASSERT_PRINTF("%-7x", 33);
	ASSERT_PRINTF("%-3x", 0);
	ASSERT_PRINTF("%-5x", 52625);
	ASSERT_PRINTF("%-4x", 9648627);
	ASSERT_PRINTF("%.5x", 21);
	ASSERT_PRINTF("%.3x", 0);
	ASSERT_PRINTF("%.4x", 5263);
	ASSERT_PRINTF("%.3x", 938862);
	ASSERT_PRINTF("%05x", 43);
	ASSERT_PRINTF("%03x", 0);
	ASSERT_PRINTF("%03x", 698334);
	ASSERT_PRINTF("%8.5x", 34);
	ASSERT_PRINTF("%8.5x", 0);
	ASSERT_PRINTF("%8.3x", 8375);
	ASSERT_PRINTF("%2.7x", 3267);
	ASSERT_PRINTF("%3.3x", 6983);
	ASSERT_PRINTF("%-8.5x", 34);
	ASSERT_PRINTF("%-8.5x", 0);
	ASSERT_PRINTF("%-8.3x", 8375);
	ASSERT_PRINTF("%-2.7x", 3267);
	ASSERT_PRINTF("%-3.3x", 6983);
	ASSERT_PRINTF("%08.5x", 34);
	ASSERT_PRINTF("%08.5x", 0);
	ASSERT_PRINTF("%08.3x", 8375);
	ASSERT_PRINTF("%02.7x", 3267);
	ASSERT_PRINTF("%03.3x", 6983);
	ASSERT_PRINTF("%0-8.5x", 34);
	ASSERT_PRINTF("%0-8.5x", 0);
	ASSERT_PRINTF("%0-8.3x", 8375);
	ASSERT_PRINTF("%0-2.7x", 3267);
	ASSERT_PRINTF("%0-3.3x", 6983);
/*	ASSERT_PRINTF("%hhx", (unsigned char)45);
	ASSERT_PRINTF("%hx", (unsigned short)385);
	ASSERT_PRINTF("%lx", (unsigned long)32);
	ASSERT_PRINTF("%llx", (long long)43);
	ASSERT_PRINTF("%hhx", uch_pos_1);
	ASSERT_PRINTF("%hx", ush_pos_1);
	ASSERT_PRINTF("%lx", ul_pos_1);
	ASSERT_PRINTF("%llx", ull_pos_1);
	ASSERT_PRINTF("%lx", 22337203685477ul);
	ASSERT_PRINTF("%llx", 522337203685470ull);
	ASSERT_PRINTF("%llx", ullmax);
	ASSERT_PRINTF("%lx", ulmax);
	ASSERT_PRINTF("%hx", (unsigned short)65535);
	ASSERT_PRINTF("%hhx", (unsigned char)255);
	ASSERT_PRINTF("%037lx", 22337203685477ul);
	ASSERT_PRINTF("%37llx", 522337203685470ull);
	ASSERT_PRINTF("%llu%hhu%llx", ull_pos_1, uch_pos_1, ull_pos_1);
	ASSERT_PRINTF("%hu%lu%hhx", ush_pos_1, ul_pos_1, uch_pos_1);
	ASSERT_PRINTF("%lu%hhu%hx", ul_pos_1, uch_pos_1, ush_pos_1);
	ASSERT_PRINTF("%u%llu%hhx", ui_pos_1, ull_pos_1, uch_pos_1);
	ASSERT_PRINTF("%llu%u%lx", ull_pos_1, ui_pos_1, ul_pos_1);
	ASSERT_PRINTF("%#x", 4294967295u);
	ASSERT_PRINTF("%#7x", 33);
	ASSERT_PRINTF("%#3x", 0);
	ASSERT_PRINTF("%#5x", 52625);
	ASSERT_PRINTF("%#2x", 94827);
	ASSERT_PRINTF("%#-7x", 33);
	ASSERT_PRINTF("%#-3x", 0);
	ASSERT_PRINTF("%#-5x", 52625);
	ASSERT_PRINTF("%#-4x", 9648627);
	ASSERT_PRINTF("%#.5x", 21);
	ASSERT_PRINTF("%#.3x", 0);
	ASSERT_PRINTF("%#.4x", 5263);
	ASSERT_PRINTF("%#.3x", 938862);
	ASSERT_PRINTF("%#05x", 43);
	ASSERT_PRINTF("%#03x", 0);
	ASSERT_PRINTF("%#03x", 698334);
	ASSERT_PRINTF("%#8.5x", 34);
	ASSERT_PRINTF("%#8.5x", 0);
	ASSERT_PRINTF("%#8.3x", 8375);
	ASSERT_PRINTF("%#2.7x", 3267);
	ASSERT_PRINTF("%#3.3x", 6983);
	ASSERT_PRINTF("%#-8.5x", 34);
	ASSERT_PRINTF("%#-8.5x", 0);
	ASSERT_PRINTF("%#-8.3x", 8375);
	ASSERT_PRINTF("%#-2.7x", 3267);
	ASSERT_PRINTF("%#-3.3x", 6983);
	ASSERT_PRINTF("%#08.5x", 34);
	ASSERT_PRINTF("%#08.5x", 0);
	ASSERT_PRINTF("%#08.3x", 8375);
	ASSERT_PRINTF("%#02.7x", 3267);
	ASSERT_PRINTF("%#03.3x", 6983);
	ASSERT_PRINTF("%#0-8.5x", 34);
	ASSERT_PRINTF("%#0-8.5x", 0);
	ASSERT_PRINTF("%#0-8.3x", 8375);
	ASSERT_PRINTF("%#0-2.7x", 3267);
	ASSERT_PRINTF("%#0-3.3x", 6983);
	ASSERT_PRINTF("%#hhx", (unsigned char)45);
	ASSERT_PRINTF("%#hx", (unsigned short)385);
	ASSERT_PRINTF("%#lx", (unsigned long)32);
	ASSERT_PRINTF("%#llx", (long long)43);
	ASSERT_PRINTF("%#hhx", uch_pos_1);
	ASSERT_PRINTF("%#hx", ush_pos_1);
	ASSERT_PRINTF("%#lx", ul_pos_1);
	ASSERT_PRINTF("%#llx", ull_pos_1);
	ASSERT_PRINTF("%#lx", 22337203685477lu);
	ASSERT_PRINTF("%#llx", 522337203685470llu);
	ASSERT_PRINTF("%#llx", ullmax);
	ASSERT_PRINTF("%#lx", ulmax);
	ASSERT_PRINTF("%#hx", (unsigned short)65535);
	ASSERT_PRINTF("%#hhx", (unsigned char)255);
	ASSERT_PRINTF("%#037lx", 22337203685477ul);
	ASSERT_PRINTF("%#37llx", 522337203685470ull);
	ASSERT_PRINTF("%llu%hhu%#llx", ull_pos_1, uch_pos_1, ull_pos_1);
	ASSERT_PRINTF("%hu%#lx%hhx", ush_pos_1, ul_pos_1, uch_pos_1);
	ASSERT_PRINTF("%lu%hhu%#hx", ul_pos_1, uch_pos_1, ush_pos_1);
	ASSERT_PRINTF("%#x%llu%hhx", ui_pos_1, ull_pos_1, uch_pos_1);
	ASSERT_PRINTF("%llu%u%#lx", ull_pos_1, ui_pos_1, ul_pos_1);*/
	ASSERT_PRINTF("%.0x", 0);
	ASSERT_PRINTF("%.x", 0);
	ASSERT_PRINTF("%5.0x", 0);
	ASSERT_PRINTF("%5.x", 0);
	ASSERT_PRINTF("%-5.0x", 0);
	ASSERT_PRINTF("%-5.x", 0);
/*	ASSERT_PRINTF("%#.0x", 0);
	ASSERT_PRINTF("%#.x", 0);
	ASSERT_PRINTF("%#5.0x", 0);
	ASSERT_PRINTF("%#5.x", 0);
	ASSERT_PRINTF("%#-5.0x", 0);
	ASSERT_PRINTF("%#-5.x", 0);*/
}

void test_ptf_hex_up(void)
{
	static unsigned char            uch_pos_1 = 100;
	static unsigned short           ush_pos_1 = 3047;
	static unsigned int             ui_pos_1 = 878023;
	static unsigned long            ul_pos_1 = 22337203685477;
	static unsigned long long       ull_pos_1 = 22337203685477;
	static unsigned long long  ullmax = 9223372036854775807;
	static unsigned long            ulmax = 9223372036854775807;
	ASSERT_PRINTF("this %X number", 17);
	ASSERT_PRINTF("this %X number", 0);
	ASSERT_PRINTF("%X", 3);
	ASSERT_PRINTF("%X", 4294967295u);
	ASSERT_PRINTF("%7X", 33);
	ASSERT_PRINTF("%3X", 0);
	ASSERT_PRINTF("%5X", 52625);
	ASSERT_PRINTF("%2X", 94827);
	ASSERT_PRINTF("%-7X", 33);
	ASSERT_PRINTF("%-3X", 0);
	ASSERT_PRINTF("%-5X", 52625);
	ASSERT_PRINTF("%-4X", 9648627);
	ASSERT_PRINTF("%.5X", 21);
	ASSERT_PRINTF("%.3X", 0);
	ASSERT_PRINTF("%.4X", 5263);
	ASSERT_PRINTF("%.3X", 938862);
	ASSERT_PRINTF("%05X", 43);
	ASSERT_PRINTF("%03X", 0);
	ASSERT_PRINTF("%03X", 698334);
	ASSERT_PRINTF("%8.5X", 34);
	ASSERT_PRINTF("%8.5X", 0);
	ASSERT_PRINTF("%8.3X", 8375);
	ASSERT_PRINTF("%2.7X", 3267);
	ASSERT_PRINTF("%3.3X", 6983);
	ASSERT_PRINTF("%-8.5X", 34);
	ASSERT_PRINTF("%-8.5X", 0);
	ASSERT_PRINTF("%-8.3X", 8375);
	ASSERT_PRINTF("%-2.7X", 3267);
	ASSERT_PRINTF("%-3.3X", 6983);
	ASSERT_PRINTF("%08.5X", 34);
	ASSERT_PRINTF("%08.5X", 0);
	ASSERT_PRINTF("%08.3X", 8375);
	ASSERT_PRINTF("%02.7X", 3267);
	ASSERT_PRINTF("%03.3X", 6983);
	ASSERT_PRINTF("%0-8.5X", 34);
	ASSERT_PRINTF("%0-8.5X", 0);
	ASSERT_PRINTF("%0-8.3X", 8375);
	ASSERT_PRINTF("%0-2.7X", 3267);
	ASSERT_PRINTF("%0-3.3X", 6983);
/*	ASSERT_PRINTF("%hhX", (unsigned char)45);
	ASSERT_PRINTF("%hX", (unsigned short)385);
	ASSERT_PRINTF("%lX", (unsigned long)32);
	ASSERT_PRINTF("%llX", (long long)43);
	ASSERT_PRINTF("%hhX", uch_pos_1);
	ASSERT_PRINTF("%hX", ush_pos_1);
	ASSERT_PRINTF("%lX", ul_pos_1);
	ASSERT_PRINTF("%llX", ull_pos_1);
	ASSERT_PRINTF("%lX", 22337203685477ul);
	ASSERT_PRINTF("%llX", 522337203685470ull);
	ASSERT_PRINTF("%llX", ullmax);
	ASSERT_PRINTF("%lX", ulmax);
	ASSERT_PRINTF("%hX", (unsigned short)65535);
	ASSERT_PRINTF("%hhX", (unsigned char)255);
	ASSERT_PRINTF("%037lX", 22337203685477ul);
	ASSERT_PRINTF("%37llX", 522337203685470ull);
	ASSERT_PRINTF("%llu%hhu%llX", ull_pos_1, uch_pos_1, ull_pos_1);
	ASSERT_PRINTF("%hu%lu%hhX", ush_pos_1, ul_pos_1, uch_pos_1);
	ASSERT_PRINTF("%lu%hhu%hX", ul_pos_1, uch_pos_1, ush_pos_1);
	ASSERT_PRINTF("%u%llu%hhX", ui_pos_1, ull_pos_1, uch_pos_1);
	ASSERT_PRINTF("%llu%u%lX", ull_pos_1, ui_pos_1, ul_pos_1);
	ASSERT_PRINTF("this %#X number", 17);
	ASSERT_PRINTF("this %#X number", 0);
	ASSERT_PRINTF("%#X", 3);
	ASSERT_PRINTF("%#X", 4294967295u);
	ASSERT_PRINTF("%#7X", 33);
	ASSERT_PRINTF("%#3X", 0);
	ASSERT_PRINTF("%#7X", 52625);
	ASSERT_PRINTF("%#2X", 94827);
	ASSERT_PRINTF("%#-7X", 33);
	ASSERT_PRINTF("%#-3X", 0);
	ASSERT_PRINTF("%#-7X", 52625);
	ASSERT_PRINTF("%#-4X", 9648627);
	ASSERT_PRINTF("%#.5X", 21);
	ASSERT_PRINTF("%#.3X", 0);
	ASSERT_PRINTF("%#.4X", 5263);
	ASSERT_PRINTF("%#.3X", 938862);
	ASSERT_PRINTF("%#05X", 43);
	ASSERT_PRINTF("%#03X", 0);
	ASSERT_PRINTF("%#03X", 698334);
	ASSERT_PRINTF("%#8.5X", 34);
	ASSERT_PRINTF("%#8.5X", 0);
	ASSERT_PRINTF("%#8.3X", 8375);
	ASSERT_PRINTF("%#2.7X", 3267);
	ASSERT_PRINTF("%#3.3X", 6983);
	ASSERT_PRINTF("%#-8.5X", 34);
	ASSERT_PRINTF("%#-8.5X", 0);
	ASSERT_PRINTF("%#-8.3X", 8375);
	ASSERT_PRINTF("%#-2.7X", 3267);
	ASSERT_PRINTF("%#-3.3X", 6983);
	ASSERT_PRINTF("%#08.5X", 34);
	ASSERT_PRINTF("%#08.5X", 0);
	ASSERT_PRINTF("%#08.3X", 8375);
	ASSERT_PRINTF("%#02.7X", 3267);
	ASSERT_PRINTF("%#03.3X", 6983);
	ASSERT_PRINTF("%#0-8.5X", 34);
	ASSERT_PRINTF("%#0-8.5X", 0);
	ASSERT_PRINTF("%#0-8.3X", 8375);
	ASSERT_PRINTF("%#0-2.7X", 3267);
	ASSERT_PRINTF("%#0-3.3X", 6983);
	ASSERT_PRINTF("%#hhX", (unsigned char)45);
	ASSERT_PRINTF("%#hX", (unsigned short)385);
	ASSERT_PRINTF("%#lX", (unsigned long)32);
	ASSERT_PRINTF("%#llX", (long long)43);
	ASSERT_PRINTF("%#hhX", uch_pos_1);
	ASSERT_PRINTF("%#hX", ush_pos_1);
	ASSERT_PRINTF("%#lX", ul_pos_1);
	ASSERT_PRINTF("%#llX", ull_pos_1);
	ASSERT_PRINTF("%#lX", 22337203685477ul);
	ASSERT_PRINTF("%#llX", 522337203685470ull);
	ASSERT_PRINTF("%#llX", ullmax);
	ASSERT_PRINTF("%#lX", ulmax);
	ASSERT_PRINTF("%#hX", (unsigned short)65535);
	ASSERT_PRINTF("%#hhX", (unsigned char)255);
	ASSERT_PRINTF("%#037lX", 22337203685477ul);
	ASSERT_PRINTF("%#37llX", 522337203685470ull);
	ASSERT_PRINTF("%llu%hhu%#llX", ull_pos_1, uch_pos_1, ull_pos_1);
	ASSERT_PRINTF("%#hx%lu%#hhX", ush_pos_1, ul_pos_1, uch_pos_1);
	ASSERT_PRINTF("%lu%hhu%#hX", ul_pos_1, uch_pos_1, ush_pos_1);
	ASSERT_PRINTF("%#x%llu%#hhX", ui_pos_1, ull_pos_1, uch_pos_1);
	ASSERT_PRINTF("%#llx%u%#lX", ull_pos_1, ui_pos_1, ul_pos_1);
	ASSERT_PRINTF("%.0X", 0);
	ASSERT_PRINTF("%.X", 0);
	ASSERT_PRINTF("%5.0X", 0);
	ASSERT_PRINTF("%5.X", 0);
	ASSERT_PRINTF("%-5.0X", 0);
	ASSERT_PRINTF("%-5.X", 0);
	ASSERT_PRINTF("%#.0X", 0);
	ASSERT_PRINTF("%#.X", 0);
	ASSERT_PRINTF("%#5.0X", 0);
	ASSERT_PRINTF("%#5.X", 0);
	ASSERT_PRINTF("%#-5.0X", 0);
	ASSERT_PRINTF("%#-5.X", 0);*/
	ASSERT_PRINTF("this %X number", 17);
	ASSERT_PRINTF("this %X number", 0);
	ASSERT_PRINTF("%X", 3);
	ASSERT_PRINTF("%X", 4294967295u);
	ASSERT_PRINTF("%7X", 33);
	ASSERT_PRINTF("%3X", 0);
	ASSERT_PRINTF("%5X", 52625);
	ASSERT_PRINTF("%2X", 94827);
	ASSERT_PRINTF("%-7X", 33);
	ASSERT_PRINTF("%-3X", 0);
	ASSERT_PRINTF("%-5X", 52625);
	ASSERT_PRINTF("%-4X", 9648627);
	ASSERT_PRINTF("%.5X", 21);
	ASSERT_PRINTF("%.3X", 0);
	ASSERT_PRINTF("%.4X", 5263);
	ASSERT_PRINTF("%.3X", 938862);
	ASSERT_PRINTF("%05X", 43);
	ASSERT_PRINTF("%03X", 0);
	ASSERT_PRINTF("%03X", 698334);
	ASSERT_PRINTF("%8.5X", 34);
	ASSERT_PRINTF("%8.5X", 0);
	ASSERT_PRINTF("%8.3X", 8375);
	ASSERT_PRINTF("%2.7X", 3267);
	ASSERT_PRINTF("%3.3X", 6983);
	ASSERT_PRINTF("%-8.5X", 34);
	ASSERT_PRINTF("%-8.5X", 0);
	ASSERT_PRINTF("%-8.3X", 8375);
	ASSERT_PRINTF("%-2.7X", 3267);
	ASSERT_PRINTF("%-3.3X", 6983);
	ASSERT_PRINTF("%08.5X", 34);
	ASSERT_PRINTF("%08.5X", 0);
	ASSERT_PRINTF("%08.3X", 8375);
	ASSERT_PRINTF("%02.7X", 3267);
	ASSERT_PRINTF("%03.3X", 6983);
	ASSERT_PRINTF("%0-8.5X", 34);
	ASSERT_PRINTF("%0-8.5X", 0);
	ASSERT_PRINTF("%0-8.3X", 8375);
	ASSERT_PRINTF("%0-2.7X", 3267);
	ASSERT_PRINTF("%0-3.3X", 6983);
/*	ASSERT_PRINTF("%hhX", (unsigned char)45);
	ASSERT_PRINTF("%hX", (unsigned short)385);
	ASSERT_PRINTF("%lX", (unsigned long)32);
	ASSERT_PRINTF("%llX", (long long)43);
	ASSERT_PRINTF("%hhX", uch_pos_1);
	ASSERT_PRINTF("%hX", ush_pos_1);
	ASSERT_PRINTF("%lX", ul_pos_1);
	ASSERT_PRINTF("%llX", ull_pos_1);
	ASSERT_PRINTF("%lX", 22337203685477ul);
	ASSERT_PRINTF("%llX", 522337203685470ull);
	ASSERT_PRINTF("%llX", ullmax);
	ASSERT_PRINTF("%lX", ulmax);
	ASSERT_PRINTF("%hX", (unsigned short)65535);
	ASSERT_PRINTF("%hhX", (unsigned char)255);
	ASSERT_PRINTF("%037lX", 22337203685477ul);
	ASSERT_PRINTF("%37llX", 522337203685470ull);
	ASSERT_PRINTF("%llu%hhu%llX", ull_pos_1, uch_pos_1, ull_pos_1);
	ASSERT_PRINTF("%hu%lu%hhX", ush_pos_1, ul_pos_1, uch_pos_1);
	ASSERT_PRINTF("%lu%hhu%hX", ul_pos_1, uch_pos_1, ush_pos_1);
	ASSERT_PRINTF("%u%llu%hhX", ui_pos_1, ull_pos_1, uch_pos_1);
	ASSERT_PRINTF("%llu%u%lX", ull_pos_1, ui_pos_1, ul_pos_1);
	ASSERT_PRINTF("this %#X number", 17);
	ASSERT_PRINTF("this %#X number", 0);
	ASSERT_PRINTF("%#X", 3);
	ASSERT_PRINTF("%#X", 4294967295u);
	ASSERT_PRINTF("%#7X", 33);
	ASSERT_PRINTF("%#3X", 0);
	ASSERT_PRINTF("%#7X", 52625);
	ASSERT_PRINTF("%#2X", 94827);
	ASSERT_PRINTF("%#-7X", 33);
	ASSERT_PRINTF("%#-3X", 0);
	ASSERT_PRINTF("%#-7X", 52625);
	ASSERT_PRINTF("%#-4X", 9648627);
	ASSERT_PRINTF("%#.5X", 21);
	ASSERT_PRINTF("%#.3X", 0);
	ASSERT_PRINTF("%#.4X", 5263);
	ASSERT_PRINTF("%#.3X", 938862);
	ASSERT_PRINTF("%#05X", 43);
	ASSERT_PRINTF("%#03X", 0);
	ASSERT_PRINTF("%#03X", 698334);
	ASSERT_PRINTF("%#8.5X", 34);
	ASSERT_PRINTF("%#8.5X", 0);
	ASSERT_PRINTF("%#8.3X", 8375);
	ASSERT_PRINTF("%#2.7X", 3267);
	ASSERT_PRINTF("%#3.3X", 6983);
	ASSERT_PRINTF("%#-8.5X", 34);
	ASSERT_PRINTF("%#-8.5X", 0);
	ASSERT_PRINTF("%#-8.3X", 8375);
	ASSERT_PRINTF("%#-2.7X", 3267);
	ASSERT_PRINTF("%#-3.3X", 6983);
	ASSERT_PRINTF("%#08.5X", 34);
	ASSERT_PRINTF("%#08.5X", 0);
	ASSERT_PRINTF("%#08.3X", 8375);
	ASSERT_PRINTF("%#02.7X", 3267);
	ASSERT_PRINTF("%#03.3X", 6983);
	ASSERT_PRINTF("%#0-8.5X", 34);
	ASSERT_PRINTF("%#0-8.5X", 0);
	ASSERT_PRINTF("%#0-8.3X", 8375);
	ASSERT_PRINTF("%#0-2.7X", 3267);
	ASSERT_PRINTF("%#0-3.3X", 6983);
	ASSERT_PRINTF("%#hhX", (unsigned char)45);
	ASSERT_PRINTF("%#hX", (unsigned short)385);
	ASSERT_PRINTF("%#lX", (unsigned long)32);
	ASSERT_PRINTF("%#llX", (long long)43);
	ASSERT_PRINTF("%#hhX", uch_pos_1);
	ASSERT_PRINTF("%#hX", ush_pos_1);
	ASSERT_PRINTF("%#lX", ul_pos_1);
	ASSERT_PRINTF("%#llX", ull_pos_1);
	ASSERT_PRINTF("%#lX", 22337203685477ul);
	ASSERT_PRINTF("%#llX", 522337203685470ull);
	ASSERT_PRINTF("%#llX", ullmax);
	ASSERT_PRINTF("%#lX", ulmax);
	ASSERT_PRINTF("%#hX", (unsigned short)65535);
	ASSERT_PRINTF("%#hhX", (unsigned char)255);
	ASSERT_PRINTF("%#037lX", 22337203685477ul);
	ASSERT_PRINTF("%#37llX", 522337203685470ull);
	ASSERT_PRINTF("%llu%hhu%#llX", ull_pos_1, uch_pos_1, ull_pos_1);
	ASSERT_PRINTF("%#hx%lu%#hhX", ush_pos_1, ul_pos_1, uch_pos_1);
	ASSERT_PRINTF("%lu%hhu%#hX", ul_pos_1, uch_pos_1, ush_pos_1);
	ASSERT_PRINTF("%#x%llu%#hhX", ui_pos_1, ull_pos_1, uch_pos_1);
	ASSERT_PRINTF("%#llx%u%#lX", ull_pos_1, ui_pos_1, ul_pos_1);*/
	ASSERT_PRINTF("%.0X", 0);
	ASSERT_PRINTF("%.X", 0);
	ASSERT_PRINTF("%5.0X", 0);
	ASSERT_PRINTF("%5.X", 0);
	ASSERT_PRINTF("%-5.0X", 0);
	ASSERT_PRINTF("%-5.X", 0);
/*	ASSERT_PRINTF("%#.0X", 0);
	ASSERT_PRINTF("%#.X", 0);
	ASSERT_PRINTF("%#5.0X", 0);
	ASSERT_PRINTF("%#5.X", 0);
	ASSERT_PRINTF("%#-5.0X", 0);
	ASSERT_PRINTF("%#-5.X", 0);*/
}
void test_pft_ptr(void)
{
	static char     a01;
	static unsigned char a02;
	static short a03;
	static unsigned short a04;
	static int a05;
	static unsigned int a06;
	static long a07;
	static unsigned long a08;
	static long long a09;
	static unsigned long long a10;
	static char *a11;
	static void *a12;

	ASSERT_PRINTF("%p", NULL);
	ASSERT_PRINTF("%9.2p\n", 1234);
	ASSERT_PRINTF("%2.9p\n", 1234);
	ASSERT_PRINTF("%.5p", 0);
	ASSERT_PRINTF("%.0p", 0);
	ASSERT_PRINTF("%5p", 0);
	ASSERT_PRINTF("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ASSERT_PRINTF("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ASSERT_PRINTF("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ASSERT_PRINTF("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ASSERT_PRINTF("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ASSERT_PRINTF("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ASSERT_PRINTF("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ASSERT_PRINTF("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ASSERT_PRINTF("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ASSERT_PRINTF("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	ASSERT_PRINTF("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
}

void test_pft_char(void)
{
	ASSERT_PRINTF("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",' ','!','"','#','$','%','&','\'','(',')','*','+',',',
'-','.','/','0','1','2','3','4','5','6','7','8','9',':',';', '<','=','>','?','@','A','B',
'C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y',
'Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h', 'i','j','k','l','m','n','o',
'p','q','r','s','t','u','v','w','x','y','z','{','|','~');

	ASSERT_PRINTF("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
			(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char) 9,
			(char)10,(char)11,(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,
			(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,(char)25,
			(char)26,(char)27,(char)28,(char)29 ,(char)30,(char)31);

	ASSERT_PRINTF("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\
%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",
(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,
(char)137,(char)138,(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,
(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,(char)153,(char)154,
(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,
(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,
(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,
(char)182,(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,
(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,
(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,(char)208,
(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,
(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,
(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,
(char)236,(char)237,(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,
(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);

	ASSERT_PRINTF("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c\
%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",
' ','!','"','#','$', '%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',
';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q', 'R','S','T','U',
'V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p',
'q','r','s','t','u','v','w','x','y','z','{','|','~');

	ASSERT_PRINTF("%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",
			(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,(char)12,
			(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,
			(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);

	ASSERT_PRINTF("%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c\
%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c\
%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c%1c%2c%3c%4c",
(char)128,(char)129,(char)130,(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,
(char)139,(char)140,(char)141,(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,
(char)150,(char)151,(char)152,(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,
(char)161,(char)162,(char)163,(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,
(char)172,(char)173,(char)174,(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,
(char)183,(char)184,(char)185,(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,
(char)194,(char)195,(char)196,(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,
(char)205,(char)206,(char)207,(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,
(char)216,(char)217,(char)218,(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,
(char)227,(char)228,(char)229,(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,
(char)238,(char)239,(char)240,(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,
(char)249,(char)250,(char)251,(char)252,(char)253,(char)254,(char)255);

	ASSERT_PRINTF("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c",
' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<',
'=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y',
'Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u',
'v','w','x','y','z','{','|','~');

	ASSERT_PRINTF("%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c\
%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)1,(char)2,(char)3,(char)4,(char)5,(char)6,(char)7,(char)8,(char)9,(char)10,(char)11,
(char)12,(char)13,(char)14,(char)15,(char)16,(char)17,(char)18,(char)19,(char)20,(char)21,(char)22,(char)23,(char)24,
(char)25,(char)26,(char)27,(char)28,(char)29,(char)30,(char)31);

	ASSERT_PRINTF("%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c\
%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c",(char)128,(char)129,(char)130,
(char)131,(char)132,(char)133,(char)134,(char)135,(char)136,(char)137,(char)138,(char)139,(char)140,(char)141,
(char)142,(char)143,(char)144,(char)145,(char)146,(char)147,(char)148,(char)149,(char)150,(char)151,(char)152,
(char)153,(char)154,(char)155,(char)156,(char)157,(char)158,(char)159,(char)160,(char)161,(char)162,(char)163,
(char)164,(char)165,(char)166,(char)167,(char)168,(char)169,(char)170,(char)171,(char)172,(char)173,(char)174,
(char)175,(char)176,(char)177,(char)178,(char)179,(char)180,(char)181,(char)182,(char)183,(char)184,(char)185,
(char)186,(char)187,(char)188,(char)189,(char)190,(char)191,(char)192,(char)193,(char)194,(char)195,(char)196,
(char)197,(char)198,(char)199,(char)200,(char)201,(char)202,(char)203,(char)204,(char)205,(char)206,(char)207,
(char)208,(char)209,(char)210,(char)211,(char)212,(char)213,(char)214,(char)215,(char)216,(char)217,(char)218,
(char)219,(char)220,(char)221,(char)222,(char)223,(char)224,(char)225,(char)226,(char)227,(char)228,(char)229,
(char)230,(char)231,(char)232,(char)233,(char)234,(char)235,(char)236,(char)237,(char)238,(char)239,(char)240,
(char)241,(char)242,(char)243,(char)244,(char)245,(char)246,(char)247,(char)248,(char)249,(char)250,(char)251,
(char)252,(char)253,(char)254,(char)255);

	ASSERT_PRINTF("%c", '\0');
	ASSERT_PRINTF("%5c", '\0');
	ASSERT_PRINTF("%-5c", '\0');
}
