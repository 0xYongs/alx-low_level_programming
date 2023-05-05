#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: decimal value
 * @index: int value of bit position to get from @n
 * Return: bit value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
