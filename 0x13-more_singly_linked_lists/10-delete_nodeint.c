#include "lists.h"
/**
 * delete_nodeint_at_index - check the code for Holberton School students.
 *@head: the variable
 *@index: the index
 *Return: the counter
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int ct;
	listint_t *temp = *head, *delete;

	if (!head || !(*head))
		return (-1);

	for (ct = 1; ct < index; ct++)
	{
		if (temp->next)
			temp = temp->next;
		else
			return (-1);
	}

	if (index == 0)
	{
		delete = temp;
		*head = temp->next;
	}
	else
		delete = temp->next;

	temp->next = delete->next;
	free(delete);
	return (1);
}
