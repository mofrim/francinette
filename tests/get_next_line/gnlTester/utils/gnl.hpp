#ifndef GNL_HPP
#define GNL_HPP
#include "leaks.hpp"

//Don't do that at home
#define TEST(x)                          \
	{                                    \
		int status = 0;                  \
		int test = fork();               \
		if (test == 0)                   \
		{                                \
			alarm(TIMEOUT_US / 1000000); \
			x;                           \
			showLeaks();                 \
			exit(EXIT_SUCCESS);          \
		}                                \
		else                             \
		{                                \
			waitpid(test, &status, 0);   \
		}                                \
	}

void gnl(int fd, char const *s);

#endif