#include "main.h"

/**
* factorial -  function that returns the factorial of a given number.
* @s: number to be used
*
* Return: factoral of the num
*/
int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	nect_factorial = factorial(n - 1);
	return (n * next_factorial);
}
