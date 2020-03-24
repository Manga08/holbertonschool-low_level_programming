#include "lists.h"
/**
 * sum_listint - check the code for Holberton School students.
 *@head: the variable
 *Return: the counter
 */
int sum_listint(listint_t *head)
{
	unsigned int ct = 0;
	listint_t *nde_i = head;

	if (head == NULL)
		return (0);

	for (; head; )
	{
		ct += head->n;
		nde_i = head->next;
		head = nde_i;
	}
	return (ct);
}
