#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table you want to add or update the key/value to key.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ct;
	hash_node_t *temp;
	char *array = "";

	if (ht == NULL)
		return;
	printf("{");
	for (ct = 0; ct < ht->size; ct++)
	{
		temp = ht->array[ct];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", array, temp->key, temp->value);
			array = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
