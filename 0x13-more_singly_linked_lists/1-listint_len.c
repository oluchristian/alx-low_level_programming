#include "lists.h"

/**
 * listint_len - returns number of elements of listint_t list
 * @h: head node
 *
 * Description: A function that returns number of elements of a listint_t list.
 *
 * Return: returns number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *traverse = h;
	size_t count = 0;

	while (traverse != NULL)
	{
		count++;
		traverse = traverse->next;
	}
	return (count);
}

