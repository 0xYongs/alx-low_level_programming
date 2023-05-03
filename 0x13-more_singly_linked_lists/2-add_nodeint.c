#include "lists.h"

/**
 * add_nodeint - adds a new mode at the beginning of a list
 * @head: pointer to the first node
 * @n: integer n to add in a new node
 * Return: address of the new element or NULL on fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* link first node with new_node */
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->n = n;
	*head = new_node;

	return (*head);
}
