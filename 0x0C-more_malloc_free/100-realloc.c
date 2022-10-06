#include <stdlib.h>
#include "main.h"

/**
*_realloc - function that reallocates a memory block using malloc and free
* @ptr: pointer to memory previously allocated with
* @: old size in bytes
* @new_size: size in bytes 
*
* Return: 0
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr)
		return (NULL);
	}
	IF (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
	}
	if (new_size > old)size && (ptr != NULL))
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (nptr);
		for (i = 0; i < old_size; i++)
			nptr[i] = *((char *)ptr + 1);
		free(ptr);
	}

	return (nptr);
}
