#include "lists.h"

/**
 * listint_len - prints the number of elements
 * @h: pointer
 * Return:number of elements
 */





size_t listint_len(const listint_t *h)
{
	size_t nodelen = 0;

	while (h != 0)
	{	
		nodelen++;
		h = h->next;
	}
	return (nodelen);
}
