#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: The list_t list
 *
 * Return: num of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t nelem;
	
	nelem = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%D] %s\n", 0, "(nil)");
		else
			printf("[%d] $s\n", h->len, h->str);
		h = h->next;
		nelem++;
	}
	return (nelem);
}

