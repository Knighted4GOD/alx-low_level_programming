#include "main.h"

/**
*_strlen - Result the length of a string
*@s: string
*Return: Always 0.
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (0);
}
