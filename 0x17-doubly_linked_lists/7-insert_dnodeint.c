#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: The head.
 * @idx: The index.
 * @n: value of integer of node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *location = *h, *new_node;
	unsigned int ct;

	if (!h)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		if (*h)
			location->prev = new_node;
		*h = new_node;
		new_node->prev = NULL;
		new_node->next = location;
		return (new_node);
	}
	for (ct = 1; ct < idx; ct++)
	{
		location = location->next;
		if (location == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->prev = location;
	new_node->next = location->next;
	if (location->next)
		location->next->prev = new_node;
	location->next = new_node;
	return (new_node);
}
