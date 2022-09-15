#include "main.h"
#include <stdio.h>

/**
*main - prints the  number from 1 to 100. followed by a new line
*but for multiples of three prints fizz instead of the number
*and for the multiples of five print Buss
*Return: Always 0
*/

int main(void)
{
int i;

for (i = 1; 0 <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
