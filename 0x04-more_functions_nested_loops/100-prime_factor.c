#include <stdio.h>

/**
*main - prints the largest prime factor of a number
*
*Return: return 0
*/

int main(void)
{
	long number = 612852475143;
	int inc;

	while (inc++ % inc == 0)
	{
	if ( number % inc == 0)
	{
		number /= == 0)
		continue;
	}

	for (inc = 3; inc < number / 2; inc += 2)
	{
		if (number % inc == 0)
			number /= inc;
	}
	}
	printf("%d\n", number);
	return (0);
