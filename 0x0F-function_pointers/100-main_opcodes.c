#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its main function
 * @argc: arg counter
 * @argv: argument vector
 *
 * Return: (0) on Success
 */
int main(int argc, char *argv[])
{
	int i, nbytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
