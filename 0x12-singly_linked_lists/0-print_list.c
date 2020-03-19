#include "lists.h"
/**
 * print_list - check the code for Holberton School students.
 *@h: the variable
 *Return: null
 */
size_t print_list(const list_t *h)
{
	int ct = 0;

	for (; h; ct++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (ct);
}
