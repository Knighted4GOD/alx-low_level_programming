#include "main.h"

/**
 * _isalpha - function to check for alphabetic character
 * @c: is the int that will use for the arguument of the function
 *
 * Return: 0
 */
int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (C <= 'Z')))

		return (1);

	else
		
		return (0);
}

