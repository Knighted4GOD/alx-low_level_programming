#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: address to the memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
