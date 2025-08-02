#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index.
 *
 * @head: points to the variable that stores the pointer to the first node.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int num_nodes = 0;
	dlistint_t *tmp;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (tmp != NULL && num_nodes < index)
	{
		tmp = tmp->next;
		num_nodes = num_nodes + 1;
	}

	if (tmp == NULL)
	{
		return (-1);
	}
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}
	if (tmp->prev != NULL)
	{
		tmp->prev->next = tmp->next;
	}
	free(tmp);
	return (1);
}
