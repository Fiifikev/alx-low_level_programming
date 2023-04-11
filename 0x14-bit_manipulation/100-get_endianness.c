#include "main.h"


/**
 * get_endianness - endianness
 * Return: 0  or 1
 */





int get_endianness(void)
{
	char *a;
	int b;

	b = 1;
	a = (char *) &b;
	return (*a);
}
