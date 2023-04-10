#include "main.h"

/**
 * main - program that adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 on ERROR and 0 on Success
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("ERROR\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
