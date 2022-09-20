#include <stdio.h>
#include "main.h"

/**
*print_rev - prints a string in reverse order
*@s: string to reverse 
*Return: nothing
*/

void print_rev(char *s)
{
	int i, tmp, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}
