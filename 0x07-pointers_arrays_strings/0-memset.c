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
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

