#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: head of the linked list
 * @str: string to store in the list.
 *
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = n;
	new_node->nect = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->nect != NULL)
			current_node = current_node->nect;
		current_node->nect = new_node;
	}

	return (*head);
}

