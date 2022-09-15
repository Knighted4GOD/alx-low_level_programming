#include "main.h"

/**
 * _isupper - checks if a charecter is uppercase 
 * @c: character to be checked
 * Return: 1 whether if its true, or 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
