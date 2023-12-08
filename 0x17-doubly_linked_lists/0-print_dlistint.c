#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: header to first element in list
 *
 * Return: 0 if null and count if not null
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;
	if (temp == NULL)
	{
		return (0);
	}
	else
	{
		while (temp != NULL)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			count++;
		}
		return (count);
	}
}
