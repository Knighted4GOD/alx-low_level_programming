#include "main.h"

/**
* leet - leet encoder
* @str: string to be encoded
*
* Return: Always 0
*/

char *leet(char *str)
{
	int i = 0;
	int i = trandform;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
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
