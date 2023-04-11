 #include "main.h"

/**
 * set_bit - set the value of bit
 * @n: number
 * @index: index
 * Return: return 1 or 0
 */




int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	 if (index >= (sizeof(unsigned long int) * 8))
			return (-1);

	p = 1 << index;
	*n = *n | p;
	return (1);
}

