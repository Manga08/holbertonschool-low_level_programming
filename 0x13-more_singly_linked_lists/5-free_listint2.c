#include "lists.h"
/**
 * free_listint2 - check the code for Holberton School students.
 *@head: the variable
 *Return: the counter
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(head && *head))
		return;
	for (; *head != NULL; )
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
