#include "main.h"

/**
*_strcat - concatenates 
*the result of the string by dest
*@dest: string will be appended
*@src: string will be concatenate
*
*Return: returns to dest
*/

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
