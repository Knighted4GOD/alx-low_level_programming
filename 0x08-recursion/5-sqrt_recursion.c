#include "main.h"

/**
* _sqrt_recursion - unction that returns the natural square root of a number
* @n: num that will be used
*
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
* _sqrt - function that returns the square root of a num
* @n: test number
* @x: num to be squared
*
* Return: square root of n
*/
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
