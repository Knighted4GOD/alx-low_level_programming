#include "main.h"

/**
* rot13 - rot13 encoder
* @str: string to be encoded
*
* Return: address of the coding string
*/

char *rot13(char *s)
{
	int a, b;
	char one[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char two[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	
	for (i = 0; *(s + i); i++)
	{	
		for (b = 0; b < 52; b++)
			if (a[b] == *(s + a))
		{
			*(s + a) = two[b];
			break;
		}
		
	}
	return (s);
}
