#include "main.h"

/**
*_strlen - returns the length of a string
*@s: string
*Return: length should be returned as an integer;
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (0);
}
