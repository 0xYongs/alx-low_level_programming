#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints a string
 * @separator: pointer to the const separator
 * @n: start of input variables
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

