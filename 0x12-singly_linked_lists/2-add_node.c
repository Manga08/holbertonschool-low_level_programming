#include "lists.h"
/**
 *_strlen - tell me the lenght
 *@s: give me the word
 *Return: gave c
 */
int _strlen(const char *s)
{
	int c;


	for (c = 0; *(s + c) != '\0'; c++)
	{
	}
	return (c);
}
/**
 * add_node - check the code for Holberton School students.
 *@head: the variable
 *@str: another variable
 *Return: dest
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
