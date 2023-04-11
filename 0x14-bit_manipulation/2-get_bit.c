#include "main.h"
/**
 * get_bit - returns value of a bit
 * @index: index
 * @n: bit to be checked
 * Return: value of bit at index or -1
 */







int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= (sizeof(n) * 8))
		return (0);
	i = 0;
	while (i <= 7)
	{
		if (index == i)
			return (n & 1);
		n >>= 1;
		i++;


	}
	return (1);
}
