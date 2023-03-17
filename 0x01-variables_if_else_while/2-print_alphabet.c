#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		ptchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
