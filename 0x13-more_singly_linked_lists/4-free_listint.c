#include "lists.h"

/**
 * free_listint - free list
 * @head: pointer to the first node of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
