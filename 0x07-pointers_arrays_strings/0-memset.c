#include "main.h"
/**
 * _memset - fills memory witth a constant byte
 * @s: pointer constant
 * @b: constant
 * @n: byte max to be used
 * Return: s
 */








char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);

}
