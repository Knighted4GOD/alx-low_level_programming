#include "main.h"

/**
* rot13 - rot13 encoder
* @str: string to be encoded
*
* Return: address of the coding string
*/

char *rot13(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}

/**
 * transform_2 - help function to map a letter with it's rot13 encoding
 * @x: char to be encoded
 *
 * Return: the concoded char
 */

char transfom_2(char X)
{
	char one[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	char replacement = x;

	while (i < 52)
	{	
		if (x == one[i])
		{
			replacement = two[i];
			break;
		}
		i++;
	}
	return (replacement);
}
