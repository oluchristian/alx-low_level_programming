#include "lists.h"

/**
 * add_nodeint - returns number of elements of listint_t list
 * @head: head node
 * @n: number value of a node
 *
 * Description: A function that returns number of elements of a listint_t list.
 *
 * Return: returns address of new elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *startNode = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = startNode;
		*head = newNode;
		return (newNode);
	}
	else
	{
		return (NULL);
	}
}

