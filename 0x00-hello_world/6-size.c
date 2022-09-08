#include <stdio.h>

/** main - print the string in the pust function
*
* Description: using the main function
* this program prints "programing is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of an int: %lu byte(s)\n", (unsigned long )sizeof(a));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return(0);
}
