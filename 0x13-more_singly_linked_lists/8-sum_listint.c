#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data (n)
 * @head: address of the head of the listint
 *
 *
 * Return: sum of all the data (n)
 * or 0 - if the list if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

