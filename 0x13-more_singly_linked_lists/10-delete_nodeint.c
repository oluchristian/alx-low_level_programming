#include "lists.h"
/**
 * delete_nodeint_at_index - func to delete node at n index
 * @head: head pointer
 * @index: index of the node to delete
 *
 * @Return - returns -1 or 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	previous = current;
	current = current->next;		
	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	previous->next = current->next;
	free(current);
	return (1);
}

