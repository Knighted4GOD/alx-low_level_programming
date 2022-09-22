#include "main.h"

/**
* rot13 - rot13 encoder
* @str: string to be encoded
*
* Return: address of the coding string
*/

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	
	for (i = 0; *(s + i); i++)
	{	
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + a) = two[b];
				break;
			}
		}
		
	}
	return (s);
}
