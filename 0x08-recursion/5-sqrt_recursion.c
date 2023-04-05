#include "main.h"

/**
 * square - find square root
 *
 * @n: int type parameter
 * @r: square root
 *
 * Return: integer
 */

int square(int n, int r);

int square(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r * r < n)
	{
		return (square(n, r + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 *
 * @n: int type parameter
 *
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
