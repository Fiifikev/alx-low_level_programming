#include "lists.h"
/**
 * add_dnodeint_end- add a new node
 * @head:pointer to the head of the linked list.
 * @n: number added to the list.
 * Return: address of the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	 dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	h = *head;
	if (h != NULL)
	{
		while (h->next  != NULL)
			h = h->next;
	}

	new->next = NULL;
	new->n = n;
	h = *head;
	new->prev = h;
	*head = new;

	if (h != NULL)
		h->next = new;

	return (new);
}
