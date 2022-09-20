#include "main.h"

/**
*1-swap.c - swap two integers numbers
*@n: first number
*@n: second number
*Return; Always 0.
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
