#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that print numbers
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		/* print next argument */
		printf("%d", va_arg(ap, int));
		/* only print separator between arguments */
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
