#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* entry point
*
* Return: Always 0
*/

int main(void)
{
	char c;
	int x;

	srand(time(0));
	while (x <= 2645)
	{
		c = rand() % 158;
		x += c;
		putchar(c);
	}
	putchar(8795 - x);

	return (0);
}
