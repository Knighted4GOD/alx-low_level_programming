#include "main.h"

/**
*_memset -  function that fills memory with a constant byte.
* @s: to memory block
* @b: chat to be used
* @n: num of bytes that will be used
*
*Return; Always 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{	
		s[n - 1] = b;
		n--;
	}
	return (s);
}
