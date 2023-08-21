#include "lists.h"

/**
 * dlistint_len - count the number of nodes
 * @h: pointer to the end
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
