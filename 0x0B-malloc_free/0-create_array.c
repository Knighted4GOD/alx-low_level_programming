#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - function that creates an array of chars.
 *@size: array size
 *@c: char to assign
 *
 * Return: pointer to array or NULL if it denial
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
