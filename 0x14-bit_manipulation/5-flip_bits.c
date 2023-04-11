#include "main.h"

/**
 *flip_bits - number of bits
 *@n: number first
 *@m: second number
 *Return:number of bits you would one number to another
 */




unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;

	unsigned long int current;
	unsigned long int xor;

	xor = n ^ m;


	i = 63;
	while (i >= 0)
	{
		current = xor >> i;
		if (current & 1)
			count++;


		i--;
	}
	return (count);
}
