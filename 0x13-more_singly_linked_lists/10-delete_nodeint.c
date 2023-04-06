#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head:pointer
 * @index:index
 * Return: 1 success 0 fail
 */





int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int i;

	i = 0;
	*temp = *head;

	if (!head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

