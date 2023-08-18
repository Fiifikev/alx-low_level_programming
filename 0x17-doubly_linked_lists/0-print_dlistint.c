#include "lists.h"

/**
 * print_dlistint - prints all elements
 * @h: pointer of the list
 * Return: number of nodes
 */




size_t print_dlistint(const dlistint_t *h)
{
	size_t numbernode;
		numbernode = 0;

	if (h == NULL)
		return (numbernode);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numbernode++;
		h = h->next;
	}
	return (numbernode);
}
