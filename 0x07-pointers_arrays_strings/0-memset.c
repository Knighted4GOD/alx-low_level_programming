#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory area
 * @b: the byte
 * @n: num of bytes to fill
 * Return: Alway 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	*ptr++ = b;
	return (s);
}
