#include "lists.h"
/**
 * dlistint_len - a new node at the beginning of a list
 * @n: int of new element
 *
 * Return: NULL or address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new_element;
  new_element = (dlistint_t *)malloc(sizeof(dlistint_t));
  if (new_element == NULL)
  {
    return (NULL);
  }
  new_element->next = *head;
  new_element->n = n;
  new_element->prev = NULL;
  if (*head != NULL)
  {
    (*head)->prev = new_element; 
  }
  *head = new_element;
  return (new_element);
}
