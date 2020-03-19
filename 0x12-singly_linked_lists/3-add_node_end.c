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
 * add_node_end - check the code for Holberton School students.
 *@head: the variable
 *@str: another variable
 *Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *p;

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = node;
	}
	return (node);
}
