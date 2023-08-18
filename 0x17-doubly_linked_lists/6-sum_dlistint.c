#include "lists.h"
/**
 * sum_dlistint - sum of all data in the list
 * @head:pointer
 * Return:sum
 */


int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cpt;
	int sum;

	sum = 0;
	cpt = head;
	if (cpt != NULL)
	{
		while (cpt->prev != NULL)
			cpt = cpt->prev;
		while (cpt != NULL)
		{
			sum += cpt->n;
			cpt = cpt->next;
		}
	}
	return (sum);
}
