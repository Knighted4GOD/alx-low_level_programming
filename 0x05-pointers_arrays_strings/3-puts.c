#include "main"
#include <stdio.h>

/**_puts - function that prints a string
* @strL sring to print
*
* Description: prints a string
* On success: return no error
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
