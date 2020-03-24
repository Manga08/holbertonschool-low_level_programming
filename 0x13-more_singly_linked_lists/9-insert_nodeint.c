#include "lists.h"
/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 *@head: the variable
 *@idx: the index
 *@n: another variable
 *Return: the counter
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int ct = 1;
	listint_t *nde_i = *head, *insert, *h = *head;

	if (head == NULL)
		return (NULL);
	for (ct = 1; ct < idx; ct++)
	{
		nde_i = (*head)->next;
		*head = nde_i;
	}
	insert = malloc(sizeof(listint_t));

	if (insert == NULL)
		return (NULL);
	insert->n = n;
	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
	}
	else
	{
		insert->next = (*head)->next;
		(*head)->next = insert;
		*head = h;
	}
	return (insert);
	free(insert);
}
