#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list.
 *
 * @head: points to the variable that stores the pointer to the first node.
 * @n: data in the node.
 *
 *
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	list_t *last_node = malloc(sizeof(list_t));
	list_t *tmp;

	if (last_node == NULL)
	{
		return (NULL);
	}

	last_node->str = strdup(str);
	last_node->len = len_str(str);
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = last_node;
	}
	return (last_node);
}
