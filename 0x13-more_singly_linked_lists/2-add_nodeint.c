#include "lists.h"

/**
 * add_nodeint - adds node at the start oflinked list
 * @head: points to first node
 * @n: data to insert
 * Return: points to new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int a)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->a = a;
	new->next = *head;
	*head = new;

	return (new);
}
