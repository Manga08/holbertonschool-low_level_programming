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
	unsigned int ct;
	listint_t *insert, *temp = *head;

	if (!head)
		return (NULL);

	for (ct = 1; ct < idx; ct++)
	{
		if (temp)
			temp = temp->next;
		else
			return (NULL);
	}

	insert = malloc(sizeof(listint_t));
	if (!insert)
		return (NULL);

	insert->n = n;

	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
	}
	else if (temp)
	{
		insert->next = temp->next;
		temp->next = insert;
	}

	return (insert);
}
