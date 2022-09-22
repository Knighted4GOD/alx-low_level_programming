#include "main.h"
#include <stdio.h>

/**
* print_line - prints an s bytes of buffer
* @c: buffer to be printed
* @s: bytes of buffer that will be printed
* @l: line of buffer that must be printed
*
* Return: Always 0
*/

void print_line(char *c, int s, int i)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("&d2x", c[1 * 10 + j]);
		else
			printf(" ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= s; k++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
			putchar(c[l * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * prints_buffer - prints a buffer
 * @b: buffer to be print
 * @size: size of buffer
 *
 * Return: always 0
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%d08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			printf_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}

