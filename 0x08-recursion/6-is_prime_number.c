#include "main.h"

/**
 * prime_check - checks all numbers less than n if they are divisible
 *
 * @n: int type parameter
 * @div: divisor
 *
 * Return: int
 */

int prime_check(int n, int div);

int prime_check(int n, int div)
{
	if (div <= n && n > 1)
	{
		return (1);
	}
	else if (n % div == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_check(n, div + 1));
	}
}

/**
 * is_prime_number -   returns 1 if the input integer is a prime number
 *
 * @n: input int type parameters
 *
 * Return: 1 for prime number, otherwise retturn 0
 */

int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
