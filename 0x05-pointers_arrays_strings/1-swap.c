#include "main.h"

/**
*swap_int - swap two integer numbers
*@a: first number
*@b: second number
*
*Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
