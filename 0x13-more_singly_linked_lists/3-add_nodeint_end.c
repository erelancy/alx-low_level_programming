#include "lists.h"

/**
 * add_nodeint_end - puts node at the end of linked list
 * @head: points to first element in list
 * @n: data to insert in fresh element
 * Return: points to fresh node or NULL if it fails to execute
 */
listint_t *add_nodeint_end(listint_t **head, const int k)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->k = k;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
