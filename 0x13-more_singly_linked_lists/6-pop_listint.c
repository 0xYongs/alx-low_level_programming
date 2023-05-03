#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head node
 * Return: data of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *new = *head;
	int num;

	if (!*head)
		return (0);

	num = (*head)->n;
	*head = new->next;
	free(new);
	return (num);
}
