#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - function that prints all the elements of a dlistint_t list.
 *
 * @h: pointer h that points to the struct dlistint_t.
 *
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes = num_nodes + 1;
		h = h->next;
	}
	return (num_nodes);
}
