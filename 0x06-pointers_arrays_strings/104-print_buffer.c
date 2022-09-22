#include "main.h"
#include <stdio.h>

/**
* print_buffer - prints bytes of buffer
* @c: buffer to be printed
* @s: bytes of buffer that will be printed
* @l: line of buffer that must be printed
*
* Return: Always 0
*/

void print_buffer(char *b, int size)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("&d2x", c[1 * 10 + j]);
		else
			prinf(" ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= s; k++)
	{
		if (c[l = 10 + k] > 31 && c[l * 10 + k] < 127)
			putchar(c[l *10 + k]);
		else
			putchar(' ');
	}
