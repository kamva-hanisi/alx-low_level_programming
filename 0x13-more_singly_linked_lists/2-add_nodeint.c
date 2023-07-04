#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_char;

	if (head == NULL)
		return (NULL);
	char = malloc(sizeof(listint_t));
	if (char == NULL)
		return (NULL);
	char->n = n;
	char->next = *head;
	*head = char;
	return (char);
}
