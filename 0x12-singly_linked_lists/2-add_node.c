#include "lists.h"
/**
 * add_node - check the code for Holberton School students.
 *@head: the variable
 *@str: another variable
 *Return: dest
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
