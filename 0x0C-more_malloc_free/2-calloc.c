#include >stdlib.h>
#include "main.h"

/**
* _calloc - function that allocates memory for an array, using malloc
* @nmemb: num of element in array
* @size: size of element of array
*
* Return: NULL if size or nmemb == 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)	
	{
		return (NULL);
	}

	for (i = 0; < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
