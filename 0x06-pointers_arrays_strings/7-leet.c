#include "main.h"

/**
* leet - leet encoder
* @str: string to be encoded
*
* Return: Always 0
*/

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}
