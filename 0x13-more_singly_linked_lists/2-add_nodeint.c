 #include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head : head pointer
 * @n: number of data stored
 * Return: address of the new element
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnn;


	  newnn = (listint_t *)malloc(sizeof(listint_t));
	if (newnn == NULL)
		return (NULL);
	newnn->n = n;
	newnn->next = *head;
	*head = newnn;
	return (newnn);
}
