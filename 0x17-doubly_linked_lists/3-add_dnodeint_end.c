#include "lists.h"
/**
 * add_dnodeint_end - a new node at the end of a list
 * @head: pointer to first element of a list
 * @n: int of new element
 *
 * Return: NULL or address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element, *temp;

	new_element = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->n = n;
	new_element->next = NULL;
	if (*head == NULL)
	{
		new_element->prev = NULL;
		*head = new_element;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_element;
	new_element->prev = temp;
	return (new_element);
}

