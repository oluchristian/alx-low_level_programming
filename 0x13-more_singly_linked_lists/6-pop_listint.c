#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node
 *
 * Return: returns head node’s data (n) or 0 if head is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *toDelete;
	int data;

	if (*head == NULL)
		return (0);
	toDelete = *head;
	*head = (*head)->next;
	data = toDelete->n;

	free(toDelete);
	toDelete = NULL;
	return (data);

}

