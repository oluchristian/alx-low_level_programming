#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: head node
 * @n: number value of a node
 *
 * Description: func to add a new node at the end of a listint_t list.
 *
 * Return: returns address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	newNode->n = n;
	newNode->next = NULL;
	current->next = newNode;
	return (newNode);
}

