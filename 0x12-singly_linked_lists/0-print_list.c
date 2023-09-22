#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: head of the singly linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t nodes = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		printf("[%i] %s\n", temp->len, temp->str);
		temp = temp->next;
		nodes += 1;
	}
	return (nodes);
}

