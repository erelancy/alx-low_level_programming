#include "lists.h"

/**
 * insert_nodeint_at_index - places new node in linked list at given place
 * @head: points to 1st node in list
 * @idx: index of new node added
 * @n: data to insert in added node
 * Return: points to addednode or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int k)
{
	unsigned int q;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->k = k;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (q = 0; temp && q < idx; q++)
	{
		if (q == qdx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
