#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct nodes - singly linked list
 * @token: string dir from PATH 
 * @next: points to the next node
 *
 */
typedef struct nodes
{
	char *token;
	struct nodes *next;
} node;

size_t print_list(node *h)
{
	size_t num_nodes = 0;
	node *current = h;

	while (current != NULL)
	{
		if (current->token == NULL)
		{
			printf("Error\n");
		}
		else
		{
			printf("%s\n", current->token);
		}
		num_nodes = num_nodes + 1;
		current = current->next;
	}

	return (num_nodes);
}

node *add_node(node **head, char *token)
{
	node *new_node = malloc(sizeof(node));
	node *tmp;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->token = token;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}

	return (new_node);
}

int main(void)
{
	node *head;
	char *name = "PATH";
	char *value = getenv(name);
	char *token = strtok(value, ":");

	head = NULL;
	while (token != NULL && value != NULL)
	{
		add_node(&head, token);
		token = strtok(NULL, ":");
	}
	print_list(head);
	return (0);
}
