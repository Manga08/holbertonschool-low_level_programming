#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index of a linked list.
 * @head: The head.
 * @index: The index.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *location = *head;
	unsigned int ct;

	if (!head || !(*head))
		return (-1);

	for (ct = 0; ct < index; ct++)
	{
		location = location->next;
		if (location == NULL)
			return (-1);
	}
	if (index == 0)
	{
		if (location->next)
			location->next->prev = NULL;
		*head = location->next;
	}
	else
	{
		if (location->next)
			location->next->prev = location->prev;
		if (location->prev)
			location->prev->next = location->next;
	}
	free(location);
	return (1);
}
