#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: The dlistint_t list.
 * Return: Counter of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t ct;

	for (ct = 0; tmp; ct++)
		tmp = tmp->next;

	return (ct);
}
