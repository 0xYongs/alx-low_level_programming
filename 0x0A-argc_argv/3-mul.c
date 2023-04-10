#include "main.h"

/**
 * main - program that multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int pro;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		pro = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", pro);
	}
	return (0);
}
