#include "lists.h"
/**
 *get_dnodeint_at_index - return nodes at a certain index
 * @head: first node
 * @index: index
 * Return:pointer to the node or NULL
 */





dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *nd = head;

	if (head == NULL)
		return (NULL);

 	i = 0;
	while (nd == NULL &&  (i == index))
	{
		
		nd = nd->next;
		i++;
	}
	return (nd);
}
