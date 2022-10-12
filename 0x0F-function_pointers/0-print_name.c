#include "function_pointer.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to function
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *));
{
	if (name != NULL && f != NULL)
		f(name);
}
