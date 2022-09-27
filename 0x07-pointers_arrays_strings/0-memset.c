#include "main.h"

/**
 * _memset - fills a block of memory
 * @s: address to the memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
