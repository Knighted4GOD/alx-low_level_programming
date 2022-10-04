#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * *string given as parameter
 *@str: string to be cpoied
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 1, j = 0;	
	char *s;

	if (str == NULL)
		return NULL;

	while (str[i])
		i++;

	s = (char *)malloc(i * sizeof(char) + 1);

	if (s == NULL)
		return (NULL);

	while (j < i)
	{
		s[j] = str[j];
		j++;
	}

	s[j] = '\0';

	return (s);
}
