extern "C"
{
#define new tripouille
#include "libft.h"
#include "leak.h"
#undef new
}

#include "sigsegv.hpp"
#include "check.hpp"
#include <string.h>

int iTest = 1;
int main(void)
{
	signal(SIGSEGV, sigsegv);
	cout << FG_LGRAY << "ft_memcpy\t: ";
	
	char dest[100];
	memset(dest, 'A', 100);
	ft_memcpy(dest, "coucou", 0);
	/* 1 */ check(dest[0] == 'A');
	char src[] = {0, 0};
	ft_memcpy(dest, src, 2);
	int i = 0;
	for (; i < 100 && dest[i] == 0; ++i)
		;
	/* 2 */ check(i == 2 && dest[2] == 'A');
	showLeaks();
	cout << ENDL;
	return (0);
}