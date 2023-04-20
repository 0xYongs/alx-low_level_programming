#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printTypeStruct - structure definition
 *
 * @type: data type
 * @printer:  function to point
 */

typedef struct printTypeStruct
{
	char *type;
	void (*printer)(va_list);
} printTypeStruct;

#endif /* VARIADIC_FUNCTIONS_H */
