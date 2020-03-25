#include "lists.h"
/**
 * free_listint_safe - check the code for Holberton School students.
 *@h: the variable
 *Return: the counter
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	if (!h || !(*h))
		return (0);
	while (*h)
	{
		size++;

		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			break;
		}
		temp = *h;
		*h = (*h)->next;
		free(temp);
	}
	*h = NULL;

	return (size);
}
