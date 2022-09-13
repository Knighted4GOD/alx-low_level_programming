#include "main.h"
/**
 * prints 10 times the alphabet - function to print 10 times abc
 *
 * Return: 0 Always
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
