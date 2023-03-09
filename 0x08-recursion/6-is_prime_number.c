#include "main.h"

/**
 * n_divisible -test if number is divible
 * @num: number to be checked
 * @div: divisor
 * Return: if the number is divisible-0
 * if it is not divisible - 1
 */



int n_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	else if (div == num / 2)
		return (1);
	else
		return (n_divisible(num, div + 1));

}

/**
 * is_prime_number - check if the number is a prime number
 * @n: number
 * Return: 1 if the number is prime
 * 0 if the integer is not prime
 */



int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	else if (n >= 2 && n <= 3)
		return (1);
	else
		return (n_divisible(n, div));
}

