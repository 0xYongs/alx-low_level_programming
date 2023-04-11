#include "main.h"

/**
 * argstostr - function that concatenates
 *		all the program arguments
 *
 * @ac: argument counter
 * @av: argument vector
 *
 * Return: pointer or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (!ac || !av)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
