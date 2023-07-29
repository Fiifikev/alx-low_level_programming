#include "main.h"

/**
*binary_to_uint - converts binary number
*@b: pointer
*Return: converted number
 */





unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned  int decimalvalue;

	decimalvalue = 0;


	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	i = 0;
	while (b[i] != '\0')
	{
		decimalvalue <<= 1;

		if (b[i] == '1')
			decimalvalue += 1;
		i++;
	}
	return (decimalvalue);
}
