#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: head node
 *
 * Description: func to free a listint_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = temp->next;

		free(temp);
	}
	*head = NULL;
}

