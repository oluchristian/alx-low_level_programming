#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to the first element in the list
 * @idx: index to insert
 * @n: int of the node element
 *
 * @Return - address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	unsigned int count = 0;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode ==  NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (newNode);
		}
		else
		{
			count++;
			current = current->next;
		}
	}
	free(newNode);
	return (NULL);
}

