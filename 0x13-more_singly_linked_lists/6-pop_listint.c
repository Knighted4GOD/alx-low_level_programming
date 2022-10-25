#include "lists.h"

/**
 * pop_listint - deletes the head of node
 * @head: address to the linked list
 *
 * Return: head of node data (n)
 * otherwise 0 - if linked list if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}

