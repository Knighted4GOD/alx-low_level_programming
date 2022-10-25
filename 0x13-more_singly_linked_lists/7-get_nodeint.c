#include "lists.h"

/**
 * get_nodeint_at_index - locates to given node
 * @head: pointer to the head
 * @index: index of the node to locate
 *
 * Return: NULL if the node do not exit
 * or located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

