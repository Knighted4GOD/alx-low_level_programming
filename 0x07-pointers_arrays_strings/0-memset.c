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
	char *ptr = s;

	while (n-- > 0)
		*ptr++ =b;
	return (s);
}
