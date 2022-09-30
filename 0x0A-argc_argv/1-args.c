#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the name of the program
 * @argc: Argument Count
 * @argv: Argument Value
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}

