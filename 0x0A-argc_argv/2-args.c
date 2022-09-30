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
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		printf("%s\n", argv[count]);
	}
}
