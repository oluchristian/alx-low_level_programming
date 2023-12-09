#include "lists.h"
/**
 * sum_dlistint - sum of data in a list
 * @head: pointer to first element of a list
 *
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;
	dlistint_t *temp;

	temp = head;
	if (temp == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);

}

