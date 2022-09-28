#include "main.h"

/**
 * is_palindrome - function that returns 1 if a string is a palindrome and 0 if not.
 * @s: string to be checked
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - checks if a string is a palindrome
 * @s: string to be checked
 * @start: index will start here
 * @end: index will end here
 * @flag: check if a string is a palindrome
 *
 * Return: 0
 */
void check(char *s, int start, int end, int flag)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, start +1, end - 1, flag);
	}
}
