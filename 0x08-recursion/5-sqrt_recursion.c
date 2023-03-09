#include "main.h"

/**
 * find_sqrt - tonfind rhe perfect square
 *
 *@a: the root to be tested
 *@num: number to find the square root
 *Return:if the number has a square root -a
 * if it doesnt have a sqqure root :-1
 */



int find_sqrt(int num, int a)
{
	if ((a * a) == num)
		return (a);
	else if  (a == num / 2)
		return (-1);
	else
		return (find_sqrt(num, a + 1));

}

/**
 * _sqrt_recursion - returns natural square
 * @n: number to return the squqre root
 * Return: if n has a natural sqaure root-square root of n
 * if n doesnt not have a sqaure root - 1
 */



int _sqrt_recursion(int n)
{
	int a = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (find_sqrt(n, a));

}
