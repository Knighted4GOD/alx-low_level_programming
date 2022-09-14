#include "main.h"

/**
 * jack_bauer - function that prints every munite of the day of Jack Bauer
 * h = hour, m = minutes
 * Return: 0
 */
void jack_bauer(void)
{
	in h, m;
	for (h = 0, h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}

