#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: a pointer to the allocated memory
 */






void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == 0)
		exit(98);

	return (mem);
}
