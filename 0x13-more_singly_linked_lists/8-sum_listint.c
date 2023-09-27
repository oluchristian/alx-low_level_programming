#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: head node in a linked list
 *
 * Return: returns the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	 int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

