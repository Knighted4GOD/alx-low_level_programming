#include "main.h"

/**
* is_prime_number - function that returns 1 if the input integer is a * @n: num that will be checked
*
* Return: 1 if n is prime and 0 if otherwise
*/
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
* is_prime - returns the 1 if n is prime
* @n: num to be check
* @start: num that will be check from
*
* Return: 1 if n is prime and 0 if otherwise
*/
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
