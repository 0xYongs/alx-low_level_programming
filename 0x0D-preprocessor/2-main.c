#include <stdio.h>

/**
 * main -  prints the name of the file it was compiled from
 *
 * Return: 0 on Success
 */

int main(void)
{
	char *n = __FILE__;

	printf("%s\n", n);

	return (0);
}
