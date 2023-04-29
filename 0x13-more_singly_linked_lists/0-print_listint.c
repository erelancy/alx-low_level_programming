#include "lists.h"

/**
 * print_listint - prints all elements for linked lists
 * @h: list of type listint_t for print
 * Return: number of node
 */
size_t print_listint(const listint_t *j)
{
	size_t num = 0;

	while (j)
	{
		printf("%d\n", j->n);
		num++;
		j = j->next;
	}

	return (num);
}
