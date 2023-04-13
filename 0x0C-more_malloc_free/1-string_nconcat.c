#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, i, j;
	char *s;

	/*treat NULL as an empty string*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*find length of both s1 and s2 respectively*/
	a = strlen(s1);
	b = strlen(s2);

	if (n >= b)
		n = b;

	s = (char *) malloc((a + n + 1) * sizeof(char));
	if (!s)
		return (NULL);

	/*add s1 to s*/
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	/*add s2 n bytes to s*/
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
