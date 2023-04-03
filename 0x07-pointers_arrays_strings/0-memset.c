#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the block of memory to be filled
 * @b: value to be used to fill the memory block
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	while (n-- > 0)
	{
		*s = b;
		s++;
	}

	return (s);
}
