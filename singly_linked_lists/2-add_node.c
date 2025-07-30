#include "lists.h"
#include <stdio.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: double pointer that points to the struct list_h.
 * @str: string that needs to be duplicated.
 *
 *
 * Return: number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t num_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		num_nodes = num_nodes + 1;
		current = current->next;
	}
	return (num_nodes);
}
