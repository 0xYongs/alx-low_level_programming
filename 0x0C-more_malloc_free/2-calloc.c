#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: array size
 * @size: size of each element
 *
 * Return: pointer or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);
	if (!m)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		m[i] = 0;

	return ((void *)m);
}
