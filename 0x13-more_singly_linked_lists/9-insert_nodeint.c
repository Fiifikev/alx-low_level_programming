#include  "lists.h"
/**
 * insert_nodeint_at_index - insert new node
 * @head:pointer
 * @idx: index
 * @n: data
 * Return: pointer to the new node or NULL
 */





listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cpt;
	listint_t *newnn;
	unsigned int i;

	i = 0;
	newnn = malloc(sizeof(listint_t));
	cpt = *head;
	if (!newnn)
		return (NULL);

	newnn->n = n;
	if (idx == 0)
	{
		newnn->next = *head;
		*head = newnn;
		return (newnn);
	}
	for (;  i < idx - 1 && cpt != NULL ; i++)
		cpt  = cpt->next;
	if (!cpt)
	{
		free(newnn);
		return (NULL);
	}
	newnn->next = cpt->next;
	cpt->next = newnn;
	return (newnn);
}
