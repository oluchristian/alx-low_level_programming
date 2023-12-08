#include "lists.h"
/**
 * dlistint_len - number of elements in a list
 * @h: header to first element in list
 *
 * Return: 0 if null and count if not null
 */
size_t dlistint_len(const dlistint_t *h)
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
			temp = temp->next;
			count++;
		}
		return (count);
	}
}

