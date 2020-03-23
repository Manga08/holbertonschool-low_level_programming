#include "lists.h"
/**
 * listint_len - check the code for Holberton School students.
 *@h: the variable
 *Return: the counter
 */
size_t listint_len(const listint_t *h)
{
	int ct = 0;

	for (; h; ct++)
		h = h->next;
	return (ct);
}
