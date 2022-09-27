#include "main.h"

/**
* _memcpy - functin to copy a memory area
* @dest: memory area
* @src: memory from
* @n: num of bytes to be copied
*
* Return; Always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned in i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
