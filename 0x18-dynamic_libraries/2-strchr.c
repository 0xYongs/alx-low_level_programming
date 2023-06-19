#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be checked
 * @c: char to be searched in string
 *
 * Return: c in the string s, or NULL if the char is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!(*s == c))
	{
		return (NULL);
	}
	return (s);
}
