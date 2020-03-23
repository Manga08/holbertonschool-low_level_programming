#include "lists.h"
/**
 * free_listint - check the code for Holberton School students.
 *@head: the variable
 *Return: the counter
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
