#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: pointer to string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: integer value of the converted string
 */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int r = 0, num, i;

	for (num = 0; !(s[num] >= 48 && s[num] <= 57); num++)
	{
		if (s[num] == '-')
		{
			sign *= -1;
		}
	}
	for (i = num; s[i] >= 48 && s[i] <= 57; i++)
	{
		r *= 10;
		r += (s[i] - 48);
	}
	return (sign * r);
}

/**
 * print_int - prints an integer
 * @n: int type parameter
 *
 * Return: nothing
 */

void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, r;

	for (i = 0; n / div > 9; i++, div *= 10)
		;
	for (; div >= 1; n %= div, div /= 10)
	{
		r = n / div;
		_putchar('0' + r);
	}
}

/**
 * main - print the product, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0) on success
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
