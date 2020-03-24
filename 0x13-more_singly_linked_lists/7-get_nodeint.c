#include "lists.h"
/**
 * get_nodeint_at_index - check the code for Holberton School students.
 *@head: the variable
 *@index: the index
 *Return: the counter
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ct = 0;
	listint_t *nde_i = head;

	if (head == NULL)
		return (0);

	for (; ct < index; ct++)
	{
		if (head == NULL)
			return (NULL);
		nde_i = head->next;
		head = nde_i;
	}
	return (nde_i);
}
