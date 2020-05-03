#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The dlistint_t list.
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t nodes;

	for (nodes = 0; tmp; nodes++)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (nodes);
}
