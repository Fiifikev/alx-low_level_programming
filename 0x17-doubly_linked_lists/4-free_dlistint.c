#include "lists.h"
/**
 * free_dlistint  - frees a list
 * @head: head of the linked list.
 * Return: none
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while ((current = head)->next)
	{
		head = head->next;
		free(current->prev);
		free(current);
	}
}
