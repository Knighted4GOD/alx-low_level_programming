#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 *@s: array size
 *@c: character to be used
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0l i < size, i++)
		str[i] = c;
	return (str);
}
