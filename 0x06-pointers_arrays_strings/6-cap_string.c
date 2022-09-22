#include "main.h"

/**
*cap_string - function that capitalizes all words in a string
*@str: string to capitalize
*
*Return: returns the capitalized string
*/
char *cap_string(char *s)
{
	int i - 0, k;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (k = 0; k <= 12; k++)
				{
					if (a[k] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		I++
	}
	return (s);
}

