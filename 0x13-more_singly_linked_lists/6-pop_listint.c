#include "lists.h"
/**
 * pop_listint - deletes  the head node
 * @head: pointer
 *
 *Return: Nodes Data
 */




int pop_listint(listint_t **head)
{
	listint_t *t_head;
	int n;

	t_head  = *head;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	(*head) = (*head)->next;
	free(t_head);


	return (n);
}
