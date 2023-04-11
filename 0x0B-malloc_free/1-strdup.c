#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter
 *
 * @str: pointer to char
 *
 * Return: pointer or NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *cp;

	if (str == NULL)
	{
		return (NULL);
	}
	cp = malloc(strlen(str) + 1);

	if (cp == NULL)
	{
		return (NULL);
	}
	return (strcpy(cp, str));
	return (cp);
}
