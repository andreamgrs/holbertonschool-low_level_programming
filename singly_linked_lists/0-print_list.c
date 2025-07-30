#include "lists.h"
#include <stdio.h>
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
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)");
			break;
		}
		printf("[%d] %s\n", current->len, current->str);
		num_nodes = num_nodes + 1;
		current = current->next;
	}

	return (num_nodes);
}
