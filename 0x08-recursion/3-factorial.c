#include "main.h"
/**
 * factorial - the factorial prototype function
 * @n: the given number
 * Return: -1 when n<0,1 when n==0
 * and retun factorial of a number
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
