#include "main.h"

/**
 * create_array - creates an array chars
 * and initializes with specific  char
 *
 * @size: size of the array
 * @c: char to initialize with
 *
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
	{
		return (0);
	}

	while (size--)
	{
		a[size] = c;
	}
	return (a);
}
