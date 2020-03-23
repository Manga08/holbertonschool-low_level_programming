#include "lists.h"
/**
 * print_listint - check the code for Holberton School students.
 *@h: the variable
 *Return: the counter
 */
size_t print_listint(const listint_t *h)
{
	int ct = 0;

	for (; h; ct++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (ct);
}
