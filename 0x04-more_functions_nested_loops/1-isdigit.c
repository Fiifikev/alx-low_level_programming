#include "main.h"

/**
 * _isdigit - check the c is a digit
 *
 * @c: the number to be checked
 * Return: 1 if the number is a digit ,  otherwise 0
 */



int _isdigit(int c)
{
	if (c >= 0  && c <= 9)
	{
		return (1);
	}

	return (0);
}
