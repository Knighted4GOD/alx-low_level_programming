#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the num of element in a linked list
 * @h: head of the list
 *
 * Return: num of the elements in
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

