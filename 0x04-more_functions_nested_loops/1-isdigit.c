#include "main.h"

/**
 *_isdigit - to check whether a character is a digit or not
 *@c: check character
 *Return: 1 if its true, 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
