#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t list
 * @h: head node
 *
 * Description: A function that prints all the elements of a listint_t list.
 *
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *traverse = h;
	size_t count = 0;

	while (traverse != NULL)
	{
		count++;
		printf("%i\n", traverse->n);
		traverse = traverse->next;
	}
	return (count);
}

