#include "main.h"

/**
 * print_triangle - entry point
 *
 * Description: print triangle with #
 * @size: size of triangle
 *
 * Return: void
*/

void print_triangle(int size)
{
	int i;
	int j;
	int n = size;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= n)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
		n--;
	}
	if (size <= 0)
		_putchar('\n');
}
