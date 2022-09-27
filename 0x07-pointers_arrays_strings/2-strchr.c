#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character
 * @s: string to look through
 * @c: the character we look for
 *
 * Return: a pointer to the char or NULL
 */
char *_strchr(char *s, char c)
{
	if (s == NUL)
		return (null);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	retun (NULL);
}
