#include "lists.h"

/**
 * get_nodeint_at_index - returns nodes at certain index in linked list
 * @head: 1st node in the linked list
 * @index: index of node to return
 * Return: pointer to the node being looked for or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int q = 0;
	listint_t *temp = head;

	while (temp && q < index)
	{
		temp = temp->next;
		q++;
	}

	return (temp ? temp : NULL);
}
