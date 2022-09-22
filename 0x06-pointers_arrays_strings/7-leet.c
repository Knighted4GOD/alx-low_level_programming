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
	return (str);
}

/**
 * tranform - helper function to map a letter with it's leet encoding
 * @x: char to be encoded char

 *Return: encoded  char
 */

char tranform(char x)
{
	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int i = 0;
	char replacement = x;

	while (i < 8)
	{
		if (x == mapping_low[i] || x == mapping_upper[i])
		{
			replacement = i + '0';
			break;
		}
		i++;
	}
	return (replacement);
}
