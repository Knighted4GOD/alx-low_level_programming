#include "main.h"

/**
* leet - leet encoder
* @s: string to be encoded
*
* Return: Always 0
*/

char *leet(char *s)
{
	int i, k;
	char a[] = "aAeEoOtTIL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (a[k] == *(s + i))
				*(s + i) = b[k];
		}
	}
	return (s);
}
