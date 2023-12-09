#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a list
 * @head: pointer to first element of a list
 * @index: index of node to be retrieved
 *
 * Return: NULL or address of new element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);

}

