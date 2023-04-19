#include <stdlib.h>

/**
 * int_index - searches an integer
 * @array: pointer to array
 * @size: size @array
 * @cmp: pointer to function to compare values with
 *
 * Return: -1 or 0 on Success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
