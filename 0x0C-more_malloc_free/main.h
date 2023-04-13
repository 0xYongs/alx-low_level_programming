#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t strlen(const char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int main(int argc, char const *argv[]);
void print_int(unsigned long int n);
int _atoi(const char *s);
void _puts(char *str);
int _putchar(char c);
