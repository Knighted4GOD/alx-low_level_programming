#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - function that creates an array of chars.
 *@s: array size
 *@c: character to be used
 *
 * Return: pointer to array or NULL if it deniel
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
