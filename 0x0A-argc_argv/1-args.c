#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: arg count
 * @argv: argument vector
 *
 * Return: 0n on success
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
