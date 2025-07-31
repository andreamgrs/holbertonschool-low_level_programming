#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 *
 * @head: pointer to the head of the list.
 *
 * Return: sum of all the data of the nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int num_node = 0;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + (head->n);
		head = head->next;
		num_node = num_node + 1;
	}
	return (sum);
}
