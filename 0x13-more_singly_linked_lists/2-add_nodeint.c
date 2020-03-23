#include "lists.h"
/**
 * add_nodeint - check the code for Holberton School students.
 *@head: the variable
 *@n: another variable
 *Return: the counter
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
