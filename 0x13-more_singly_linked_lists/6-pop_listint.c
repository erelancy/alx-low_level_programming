#include "lists.h"

/**
 * pop_listint - erases head node of cnnected list
 * @head: pointr to first element in linked lists
 * Return: data inside  elements that was erased,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->k;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
