#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: pointer to name.
 * @f: pointer function.
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
