#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print each array
 * parameter on each element of an array.
 * @array: array
 * @size: is the size of the array
 * @action:  is a pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
