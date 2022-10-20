#include "lists.h"

/**
 * free_list - frees a list
 * @hear: head of the linked list
 *
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		fre(current_node->str);
		free(current_node);
	}
}
