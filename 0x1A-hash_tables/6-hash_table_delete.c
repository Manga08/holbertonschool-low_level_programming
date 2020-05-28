#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table you want to add or update the key/value to key.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int ct;
	hash_node_t *temp, *actual;

	if (ht == NULL)
		return;
	for (ct = 0; ct < ht->size; ct++)
	{
		if (ht->array[ct] != NULL)
		{
			temp = ht->array[ct];
			while (temp != NULL)
			{
				actual = temp;
				temp = temp->next;
				free(actual->key);
				free(actual->value);
				free(actual);
			}
		}
	}
	free(ht->array);
	free(ht);
}
