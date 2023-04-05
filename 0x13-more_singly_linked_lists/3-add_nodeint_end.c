#include "lists.h"
/**
 *add_nodeint_end - add a new node at the end
 *@head: pointer to the head
 *@n: data in node
 *Return:address of a new element
 */





listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *cpt;

	cpt = *head;

	while (cpt && cpt->next != NULL)
		cpt = cpt->next;
newnode = (listint_t *) malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (cpt)
		cpt->next = newnode;
	else
		*head = newnode;
	return (newnode);
}
