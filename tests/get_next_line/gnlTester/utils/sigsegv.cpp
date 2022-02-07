#include "sigsegv.hpp"
#include "color.hpp"

extern int iTest;

void sigsegv(int signal)
{
	cout << FG_LYELLOW << iTest++ << ".SIGSEGV";
	exit(signal);
}

void sigalarm(int signal)
{
	cout << FG_LYELLOW << iTest++ << ".TIMEOUT";
	exit(signal);
}

void sigabort(int signal)
{
	cout << FG_LYELLOW << iTest++ << ".ABORT";
	exit(signal);
}

void sigbus(int signal)
{
	cout << FG_LYELLOW << iTest++ << ".BUS_ERROR";
	exit(signal);
}