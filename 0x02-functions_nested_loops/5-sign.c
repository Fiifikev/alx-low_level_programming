#include "main.h"


/**
 * print_sign - this is a function
 * @n: function paarameter
 * Return: 1,0 and -1
 */



int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
