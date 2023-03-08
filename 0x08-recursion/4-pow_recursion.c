#include "main.h"

/**
 * _pow_recursion - function prototype
 * @y: exponent of the number
 * @x: base of the number
 * Return: -1 ,0 and factorial
 */






int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
