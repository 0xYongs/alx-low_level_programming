#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: memory area destination
 * @src: memory area source
 * @n: positive int type arg
 *
 * Return: dest on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
