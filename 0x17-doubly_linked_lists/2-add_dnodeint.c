#include "lists.h"
/**
 * add_dnodeint- add a new node
 * @head:pointer to the head of the linked list.
 * @n: number added to the list.
 * Return: address of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	 dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->prev = NULL;
	new->n = n;
	h = *head;
	new->next = h;
	*head = new;

	if (h != NULL)
		h->prev = new;

	return (new);
}
