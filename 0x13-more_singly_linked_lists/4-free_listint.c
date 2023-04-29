#include "lists.h"

/**
 * free_listint - frees linked list
 *
 * @head: listint_t lists to be free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
