#include "lists.h"
/**
 * *add_nodeint - adds nodes at the beginning
 * @head: header pointer
 * @n : number of data to insert in node
 * Return: pointer to the new node,NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnn;

	newnn = malloc(sizeof(listint_t));
	if (newnn == NULL)
	{
		return (NULL);
	}
	newnn -> n = n;
	newnn -> next = *head;
	*head = newnn;

	return (newnn);
}
