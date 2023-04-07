#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *	appends the src string to the dest string
 *
 * @dest: char type arg of the function
 * @src: char type arg of the function
 *
 * Return: string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr++ = *src;
		src++;
	}
	*ptr = '\0';

	return (dest);
}
