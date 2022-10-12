#include <stdio.h>
/**
 * function that executes a function given as a parameter.
 * @array: array on element.
 * @size: size of array.
 * @action: function 
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[1]);
		}
	}
}
