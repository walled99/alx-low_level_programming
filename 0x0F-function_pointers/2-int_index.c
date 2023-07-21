#include "function_pointers.h"

/**
 * int_index - Entry point
 * Description: find integer
 * @array: array of numbers
 * @size: size of array
 * @cmp: function pointer
 * Return: Integer (index) or -1 (fail)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size != 0 && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}

	}
	return (-1);
}
