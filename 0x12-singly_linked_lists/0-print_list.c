#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a lits_t list
 * @h: singly linked list to print
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node;

	for (node = 0; h; node++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (node);
}
