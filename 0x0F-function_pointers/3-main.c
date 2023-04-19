#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - takes 4 args where 2 are int variables and an operator to
 *	perform a function between the two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: (0) on Success
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	char *operator;

	/* Error if args are not 4 with the exexutable */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == 47 || *operator == 37) && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(n1, n2));
	return (0);
}
