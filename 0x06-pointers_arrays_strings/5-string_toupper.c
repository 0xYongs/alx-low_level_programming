#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 *		of a string to uppercase
 * @s: string parameter
 * Return: string
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
