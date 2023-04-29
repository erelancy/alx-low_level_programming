#include "lists.h"

/**
 * listint_len - returns number of elements in the linked lists
 * @h: linked list of type listint_t for traversing
 * Return: number of node
 */
size_t listint_len(const listint_t *j)
{
	size_t num = 0;

	while (j)
	{
		num++;
		j = j->next;
	}

	return (num);
}
