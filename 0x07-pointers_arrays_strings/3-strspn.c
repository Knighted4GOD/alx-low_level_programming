#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the string we look at
  * @accept: the string we compare to
*
 * Return: unsigned int
unsigned int _strspn(char *s, char *accept)
(
	int i = 0
	int j o 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[i]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
			if (s[i] != accept[i]
			break;
	}
	return (i);
