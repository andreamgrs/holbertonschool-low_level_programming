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
 * add_node - function that adds a new node at the beginning of a list.
 *
 * @head: points to the variable that stores the pointer to the first node.
 * @str: string.
 *
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len_str(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
