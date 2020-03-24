#include "lists.h"
/**
 * pop_listint - check the code for Holberton School students.
 *@head: the variable
 *Return: the counter
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *next_node = 0;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = next_node;

	return (data);
}
