#include <stddef.h>

/**
 * array_iterator - function that executes a function given as
 *		a parameter on each element of an array
 * @array: array to iterate
 * @size: array size
 * @action: pointer to function to call
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
