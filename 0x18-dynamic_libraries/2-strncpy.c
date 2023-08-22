#include "main.h"

/**
 * _strncpy - Copy of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int srclength = 0;

	while (src[i])
		srclength++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = srclength; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
