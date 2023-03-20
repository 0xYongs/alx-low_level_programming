#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
