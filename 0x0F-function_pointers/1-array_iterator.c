#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a parameter.
 * @array: array on element.
 * @size: size of array.
 * @action: function
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
