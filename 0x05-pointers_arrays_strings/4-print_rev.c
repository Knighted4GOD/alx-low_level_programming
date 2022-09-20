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
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
		
