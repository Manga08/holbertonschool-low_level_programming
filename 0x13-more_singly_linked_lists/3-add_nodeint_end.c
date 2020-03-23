#include "lists.h"
/**
 * add_nodeint_end - check the code for Holberton School students.
 *@head: the variable
 *@n: another variable
 *Return: the counter
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	for (; temp->next != NULL; )
	{
		temp = temp->next;
	}
	temp->next = node;
	return (node);
}
