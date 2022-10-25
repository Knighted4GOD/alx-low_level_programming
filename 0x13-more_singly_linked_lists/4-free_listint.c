#include "lists.h"

/**
 * free_listint - fress a listint_t list
 * @head: head of the list
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

}
