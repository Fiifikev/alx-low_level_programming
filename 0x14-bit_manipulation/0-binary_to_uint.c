#include "main.h"

/**
*binary_to_uint - converts binary number
*@b: pointer
*Return: converted number
 */





unsigned int binary_to_uint(const char *b)
{
int i;
unsigned  int decimalvalue;

decimalvalue = 0;


if (b == NULL)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] < '0' && b[i] > '1')
return (0);
}

decimalvalue = 2 * decimalvalue + (b[i] - '0')
}
return (decimalvalue);
}
