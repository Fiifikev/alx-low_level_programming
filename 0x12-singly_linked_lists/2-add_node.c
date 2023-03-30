#include "lists.h"
/**
 * add_node - add a new node
 * @head:pointer to the head of the linked list.
 * @str: string added to the list.
 * Return: address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t a = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[a])
		a++;

	new->str = strdup(str);
	new->len = a;
	new->next = *head;
	*head = new;

	return (*head);
}
