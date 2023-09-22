#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node to the end of a list_t list
 * @head: pointer to the head of a list
 * @str: string to be duplicated
 *
 * Return: The address of the new element or null if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodeEnd;
	char *duplicated;
	list_t *temp;

	if (head == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	nodeEnd = malloc(sizeof(list_t));

	if (nodeEnd == NULL)
	{
		return (NULL);
	}	
	duplicated = strdup(str);
	if (duplicated == NULL)
	{
		free(nodeEnd);
		return (NULL);
	}
	nodeEnd->str = duplicated;
	nodeEnd->len = strlen(duplicated);
	nodeEnd->next = NULL;

	if (*head == NULL)
	{
		*head = nodeEnd;
		return (nodeEnd);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = nodeEnd;
	return (*head);

}

