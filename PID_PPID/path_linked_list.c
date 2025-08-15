#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct nodes
{
	char *token;
	struct node *next;
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

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->token = token;
	new_node->next = *head;
	*head = new_node;

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
		print_list(head);
		token = strtok(NULL, ":");
	}
	return (0);
}
