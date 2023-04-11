#include "main.h"
/**
 * clear_bit - set value of a bit
 * @n: pointer
 * @index: index
 * Return: 1 and -1
 */







int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index >= (sizeof(n) * 8))
		return (-1);
	p = 1 << index;

	if (*n & p)
		*n ^= p;

	return (1);
}
