#include "main.h"

/**
 * str_concat - function that concates two strings
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0;
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = strlen(s1);
	b = strlen(s2);

	s = malloc((a * sizeof(char)) + ((b + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
