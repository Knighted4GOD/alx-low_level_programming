#include "main.h"

/**
*malloc_checked - prints a string
*@b: num of memory
*Return: 0
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)

	{
		exit(96);
	}

	return (p);
