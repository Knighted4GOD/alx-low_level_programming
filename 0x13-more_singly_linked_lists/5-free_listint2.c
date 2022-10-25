#include "iists.h"

/**
 * free_listint2 - frees a linstint_t list
 * @head: pointer to the address
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}		
