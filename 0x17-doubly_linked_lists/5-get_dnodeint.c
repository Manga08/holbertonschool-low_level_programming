#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: The head.
 * @index: The index.
 * Return: The nth node of a linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int ct = 0;

	for (ct = 0; node != NULL && ct <= index; ct++)
	{
		if (ct == index)
			return (node);
		node = node->next;
	}
	return (NULL);
}
