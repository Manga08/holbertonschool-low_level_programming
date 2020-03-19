#include "lists.h"
/**
 * free_list - check the code for Holberton School students.
 *@head: the variable
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
