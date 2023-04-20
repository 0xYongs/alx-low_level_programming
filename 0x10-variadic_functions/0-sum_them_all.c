#include <stdarg.h>

/**
 * sum_them_all - adds all its parameters
 * @n: start of the input variables
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	/* initialize the argument list from the start */
	va_start(ap, n);

	/* iterate throught all parameter values */
	for (i = 0; i < n; i++)
		/* get the next parameter value and add it to sum */
		sum += va_arg(ap, int);
	/* clean up */
	va_end(ap);
	return (sum);
}
