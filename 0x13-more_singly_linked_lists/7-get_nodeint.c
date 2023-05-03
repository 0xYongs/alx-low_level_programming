#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a listint_t linked list
 * @head: head node
 * @index: index of the node
 * Return: list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i;

	if (!head)
		return (0);
	for (i = 0; new; i++)
	{
		if (i == index)
			return (new);
		new = new->next;
	}
	return (NULL);
}
