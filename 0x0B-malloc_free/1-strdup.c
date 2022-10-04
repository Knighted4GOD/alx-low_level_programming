#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated
 * *string given as parameter
 *@str: string to be cpoied
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL);
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);
}
