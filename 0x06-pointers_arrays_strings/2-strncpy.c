#include "main.h"

/**
 * _strncpy - function that concatenates two strings
 *      appends the src string to the dest string
 *
 * @dest: char type arg of the function
 * @src: char type arg of the function
 * @n: int type parameter
 *
 * Return: string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
