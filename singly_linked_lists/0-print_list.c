#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @list_t *h: pointer h that points to the struct list_h.
 *
 * Return: number od nodes.
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes = num_nodes + 1;
		h = h->next;
	}

	return (num_nodes);
}
