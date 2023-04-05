#include "lists.h"

/**
 * free_listint - free linkedlist
 * @head: free list
 */




void free_listint(listint_t *head)
{
	listint_t  *cpt;

	while (head != NULL)
	{
		cpt = head->next;
		free(head);
		head = cpt;
	}
}
