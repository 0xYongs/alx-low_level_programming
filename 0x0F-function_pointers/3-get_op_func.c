#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - get ops function pointer of type char array
 *		that accepts 2 int type data inputs
 * @s: pointer to char argument
 *
 * Return: operator function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
