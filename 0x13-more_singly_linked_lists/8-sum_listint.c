#include "lists.h"
/**
 * sum_listint - sum of all data in the list
 * @head:pointer
 * Return:sum
 */




int sum_listint(listint_t *head)
{
	listint_t *cpt;
	int sum;

	sum = 0;
	cpt = head;

	while (cpt != NULL)
	{
		sum += cpt->n;
		cpt = cpt->next;
	}
	return (sum);
}


