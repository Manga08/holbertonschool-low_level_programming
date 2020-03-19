#include "lists.h"
/**
 * list_len- check the code for Holberton School students.
 *@h: the variable
 *Return: the count
 */
size_t list_len(const list_t *h)
{
	int ct = 0;

	for (; h; ct++)
		h = h->next;
	return (ct);
}
