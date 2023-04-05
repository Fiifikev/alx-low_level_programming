#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: pointer
 */





void free_listint2(listint_t **head)
{
	listint_t *cpt;
	
	if (head == NULL)
		return;
	while (*head != NULL)
	 {
		cpt = *head;
		cpt = (*head)->next;
		free(cpt);
	}
}
