#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a list
 * @n: node data
 * @idx: index to insert new node
 *
 * Return: NULL or address of new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp, *new_node;

	if (h == NULL)
		return (NULL);
	
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	temp = *h;
	
	if (idx == 0)
	{
		new_node->next = temp;
		new_node->prev = NULL;
		if (temp != NULL)
			temp->prev = new_node;
		*h = new_node;
		return new_node;
	}

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new_node->prev = temp;
			new_node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}
	if (count == idx - 1 && temp == NULL)
	{
		temp = *h;
		while (temp->next != NULL)
			temp = temp->next;
		new_node->prev = temp;
		new_node->next = NULL;
		temp->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);

}

