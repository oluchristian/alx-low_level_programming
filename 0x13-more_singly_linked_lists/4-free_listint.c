#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: head node
 *
 * Description: func to free a listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = current->next;
		free(current);
	}
}

