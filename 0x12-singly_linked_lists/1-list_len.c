#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: head of a linked list
 *
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t elements = 0;

	while (temp != NULL)
	{
		elements += 1;
		temp = temp->next;
	}
	return (elements);

}

