#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node at the begining
 * @head: pointer to the address of the head
 * @n: the integer for the new node
 *
 * Return: address of the new added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
