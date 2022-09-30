#include <stdio.h>
#include "main.h"

/**
 * main - funtion to print name of program
 * @argc: Argument Count
 * @argv: Argument Value
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
