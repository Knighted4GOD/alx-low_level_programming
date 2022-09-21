#include <stdio.h>
#include "main.h"

/**
* puts_half - prints a string
* @str: string to print
*
* Return: Always 0
*/

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar ('\n');
}

