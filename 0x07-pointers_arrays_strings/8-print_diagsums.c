#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 *
 * Description: sum 2D array digonals
 * @a: pointer to integer 2D array
 * @size: int size of row
 *
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int total1 = 0;
	int total2 = 0;
	int *aa = a + (size - 1);

	while (i < size)
	{
		total1 = total1 + *a;
		a += (size + 1);
		i++;
	}
	printf("%d, ", total1);
	i = 0;
	while (i < size)
	{
		total2 = total2 + *aa;
		aa += (size - 1);
		i++;
	}
	printf("%d\n", total2);
}
