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
	dlistint_t *temp = *h, *next_ct = *h, *temp2, *new_node;
	unsigned int ct, ct2;

	if (*h == NULL)
		return (NULL);
	for (ct = 0; next_ct != NULL; ct++)
		next_ct = next_ct->next;
	if (idx > ct)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL, new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (ct2 = 0; ct2 < idx; ct2++)
		temp2 = temp, temp = temp->next;
	new_node->next = temp;
	new_node->prev = temp2;
	temp2->next = new_node;
	if (temp)
		temp->prev = new_node;
	return (new_node);
}
