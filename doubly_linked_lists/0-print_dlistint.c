#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 *
 * @h: pointer h that points to the struct dlistint_t.
 *
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_nodes = num_nodes + 1;
		h = h->next;
	}
	return (num_nodes);
}
