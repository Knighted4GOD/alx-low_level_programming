#include "main.h"

/**
* _memcpy - functin to copy a memory area
* @dest: memory area to
* @src: memory area from
* @n: num of bytes to be copied
*
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned in i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	

	return (dest);
}
