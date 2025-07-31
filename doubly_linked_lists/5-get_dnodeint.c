#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list. *
 * @head: pointer to the first node.
 * @index: the number of n to print.
 *
 *
 * Return: nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num_nodes = 0;

	while (head != NULL)
	{
		if (num_nodes == index)
		{
			return (head);
		}
		num_nodes = num_nodes + 1;
		head = head->next;
	}
	return (NULL);
}
