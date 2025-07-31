#include "lists.h"
#include <stdlib.h>
/**
 * free_node - function that frees the node.
 *
 * @head: pointer to the head os the list.
 *
 * Return: nothing.
 */
void free_node(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
/**
 * free_list - function that frees a list_t list.
 *
 * @head: pointer to the head of the list.
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	free_node(head);
}
