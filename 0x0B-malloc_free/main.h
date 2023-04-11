#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *create_array(unsigned int size, char c);
size_t strlen(const char *str);
char *strcpy(char *dest, const char *src);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
