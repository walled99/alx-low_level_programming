#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * Description: executes a function given as a parameter on each element
 * @array: pointer
 * @size: size of array
 * @action: function pointer
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		while (size > 0)
		{
			action(*array);
			array++;
			size--;
		}
	}
}
