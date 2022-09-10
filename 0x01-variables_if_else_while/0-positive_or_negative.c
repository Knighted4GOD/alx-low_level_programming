#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print if the number if positive, zero, or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	srand(time(o));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else 
		printf("%d is zero\n", n);

	return (0);
}

