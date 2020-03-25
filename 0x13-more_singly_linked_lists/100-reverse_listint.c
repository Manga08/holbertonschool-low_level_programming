#include "lists.h"
/**
 * reverse_listint - check the code for Holberton School students.
 *@head: the variable
 *Return: the counter
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_part = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous_part;
		previous_part = *head;
		*head = next;
	}

	*head = previous_part;
	return (*head);
}
