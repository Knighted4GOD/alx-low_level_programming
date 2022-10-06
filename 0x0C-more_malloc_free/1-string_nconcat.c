#include "main.h"
#include <stddef.h>

/**
*string_concat - concat two strings
* @s1: 1st sring
* @s2: 2nd string
* @n: index
* Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size = 0, i;

	if (s1 == NULL)
		s1 = '';

	if (s2 == NULL)
		s2 = '';

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (p == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

return (p);
}
