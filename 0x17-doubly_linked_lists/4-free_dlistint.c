#include "lists.h"
/**
 * free_dlistint - Free a dlistint_t list.
 * @head: the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
