#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: string to be compared
 * @s2: string to compare by
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
