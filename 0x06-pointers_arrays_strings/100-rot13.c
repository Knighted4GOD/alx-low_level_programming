#include "main.h"

/**
* rot13 - rot13 encoder
* @str: string to be encoded
*
* Return: address of the string being coding
*/

char *rot13(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform_2(str[i]);
		i++;
	}
	return (str);
}
