#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: 0 success
 */
int main(void)

{
	int number;

	for (number = 48; number <= 57; number)
	{
		putchar(number);

		if(number == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	putchar (0);

}
