#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *      appends the src string to the dest string
 *
 * @dest: char type arg of the function
 * @src: char type arg of the function
 * @n: int type parameter of the function
 *
 * Return: string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
