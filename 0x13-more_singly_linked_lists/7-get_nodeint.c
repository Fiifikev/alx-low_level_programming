#include "lists.h"
/**
 * get_nodeint_at_index - return nodes at a certain index
 * @head: first node
 * @index: index
 * Return:pointer to the node or NULL
 */







listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	 listint_t *nd = head;

	 i = 0;

	while (nd != NULL && (i < index))
	{
		nd = nd->next;
		i++;
	}
	return (nd);
}

