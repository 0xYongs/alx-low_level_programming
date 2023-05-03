#include "lists.h"

/**
 * delete_nodeint_at_index - Function that delete a nodo
 * @head: node head
 * @index: index
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *actual = *head;
	listint_t *node;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(actual);
		return (1);
	}
	while (actual)
	{
		if (i  == index - 1)
		{
			node = actual->next;
			actual->next = node->next;
			free(node);
			return (1);
		}
		actual = actual->next, i++;
	}
	return (-1);
}
