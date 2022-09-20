#include "main.h"

/**
*swap_int - swap two integer numbers
*@n: first number
*@n: second number
*
*Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
