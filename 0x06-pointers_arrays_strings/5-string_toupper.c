#include "main.h"

/**
*string_toupper -  function that changes all lowercase letters of a string to uppercase.
*@str: Parameter
*Return: Always 0
*/

char *string_toupper(char *)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
