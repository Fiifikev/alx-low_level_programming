#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: pointer of the list
 * Return: number of nodes
 */






size_t print_listint(const listint_t *h)
{
	size_t numbernode;
		numbernode = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		numbernode++;
		h = h->next;
	}
	return (numbernode);
}
