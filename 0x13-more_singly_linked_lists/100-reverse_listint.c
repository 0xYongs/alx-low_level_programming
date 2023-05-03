#include "lists.h"

/**
 * reverse_listint - reverse the list
 * @head: head of linked list
 * Return: list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = start;
		start = *head;
		*head = next;
	}
	*head = start;
	return (*head);
}
