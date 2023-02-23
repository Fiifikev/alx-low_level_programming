#include "main.h"

/**
 * _isdigit - check the c is a digit
 *
 * @c: the number to be checked
 * Return : 1 otherwise 0
 */



int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
