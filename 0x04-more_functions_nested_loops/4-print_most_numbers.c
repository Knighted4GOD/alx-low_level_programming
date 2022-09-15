#include <stdio.h>
#include "main.h"

/**
 * print_most_bumbers - prints numbers except 2 and 4
 *
 * Return: return none
 */

void print_most_numbers(void)
{
	
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n ==52))
		{
			continye;
		}
		putchar(n);
	}
	putchar(10);
}

