#include <stdio.h>
#include "main.h"

/**
*print_rev - prints a string in reverse order
*@s: string to reverse 
*Return: nothing
*/

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\n')
		n++

	for (i = n - 1; i >= 0 i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
		
