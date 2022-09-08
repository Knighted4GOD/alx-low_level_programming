#include <stdio.h>

/**
 * main - Print Sizeof Many Var Type
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("size of an int: %d byte(s)\n", sizeof(b));
	printf("size of a long int: %d byte(s)\n", sizeof(c));
	printf("size of a long long int: %d byte(s)\n", sizeof(d));
	printf("size of a float: %d byte(s)\n", sizeof(e));
	return(0);
}
