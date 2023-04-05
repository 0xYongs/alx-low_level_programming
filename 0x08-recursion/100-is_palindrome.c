#include "main.h"

/**
 * find_strlen - returns string length
 *
 * @s: string to measure
 *
 * Return: int
 */

int find_strlen(char *s);
int check_palindrome(char *s, int len, int i);
int is_palindrome(char *s);

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - checks if a string is palidrome
 *
 * @s: string to check
 * @len: length of s
 * @i: index of the string to be checked
 *
 * Return: -1 or 0
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));
	return (0);
}

/**
 * is_palindrome - checks if a string is a palidrome
 *
 * @s: string to check
 *
 * Return: -1 or 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, i));
}
