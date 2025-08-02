#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node at idx.
 *
 * @h: points to the variable that stores the pointer to the first node.
 * @idx: index of the list where the new node should be added.
 * @n: data inside the node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int num_nodes = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;

	if (new_node == NULL)
	{
		return (NULL);
	}
	tmp = *h;
	if (idx == 0)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *h;
		if (new_node->next != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	while (tmp != NULL && num_nodes < (idx - 1))
	{
		tmp = tmp->next;
		num_nodes = num_nodes + 1;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	if (tmp->next != NULL)
	{
		tmp->next->prev = new_node;
	}
	tmp->next = new_node;
	return (new_node);
}
