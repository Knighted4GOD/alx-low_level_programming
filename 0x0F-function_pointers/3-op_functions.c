#include "3-calc.h"

/**
 *op_add - returns the sum of 2 nums.
 *@a: integer
 *@b: integer
 *
 * Return: sum.
 */
int op_add(int a, int b)
{
	return (a +);
}

/**
 * op_sub - return difference of 2 nums
 * @a: integer
 * @b: integer
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of two nums
 * @a: integer
 * @b: integer
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient num
 * @a: integer
 * @b: integer
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the remainde of division
 * @a: integer
 * @b: integer
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
