#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * len_str - function that gets the length of the string.
 *
 * @str: string.
 *
 * Return: length of string.
 */
int len_str(const char *str)
{
	int cont = 0;

	while (str[cont] != '\0')
	{
		cont = cont + 1;
	}
	return (cont);
}
/**
 * add_node_end - function that adds a new node at the end of a list.
 *
 * @head: points to the variable that stores the pointer to the first node.
 * @str: string.
 *
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
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
