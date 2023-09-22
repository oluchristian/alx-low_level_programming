#include "lists.h"
/**
 * free_list - function that frees a list_t list
 *
 * @head: points to the first elemt in a string list
 *
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}

