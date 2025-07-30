#include "lists.h"
#include <stdio.h>
/**
 * list_len - function that prints all the elements of a list_t list.
 *
 * @h: pointer h that points to the struct list_h.
 *
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
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
