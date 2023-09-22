#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node at the beginning of a new list
 * @head: first element in a string list
 * @str: string to be duplicated
 *
 * Return: The address of the new element or null if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *header;
	char *duplicateString;

	if (str == NULL)
	return (NULL);
	header = malloc(sizeof(list_t));

	if (header == NULL)
		return (NULL);
	duplicateString = strdup(str);

	if (duplicateString == NULL)
	{
		free(header);
		return (NULL);
	}
	header->str = duplicateString;
	header->len = strlen(duplicateString);
	header->next = *head;
	*head = header;
	return (header);
}

