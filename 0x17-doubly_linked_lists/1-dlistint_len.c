#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a list.
 * @h: pointer to the head of the linkedlist
 * Return: number of nodes  in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
