#include "main.h"

/**
*_strncat - concatenate two strings
*@dest: string to be append
*@src: string will be complete
*@n: compare here
*Return: Always 0.
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
