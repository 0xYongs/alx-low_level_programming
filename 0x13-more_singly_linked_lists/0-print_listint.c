#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer to first node
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	printf("%d\n", h->n);
	return (node);
}
