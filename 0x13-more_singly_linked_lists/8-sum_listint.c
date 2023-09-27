#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @index: index of the node, starting at 0
 * @head: head node in a linked list
 *
 * Return: returns the nth node or null if it doesn't exist
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	 int count = 0;

	while (current != NULL)
	{
		count += current->n;
		current = current->next;
	}
	return (count);
}

