#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, flag = 0;

	if (ht == NULL)
		return;


	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (flag == 1 && node != NULL)
			printf(", ");
		if (node != NULL)
		{
			if (node->next == NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				flag = 1;
				continue;
			}
			while (node != NULL)
			{
				flag = 1;
				printf("'%s': '%s'", node->key, node->value);
				if (node->next != NULL)
					printf(", ");
				node = node->next;
			}
		}
	}
	printf("}\n");
}
