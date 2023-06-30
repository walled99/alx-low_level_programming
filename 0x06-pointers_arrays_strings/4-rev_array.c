#include "main.h"

/**
 * reverse_array - entry point
 *
 * Description: reverse integers
 * @a: pointer to array of int
 * @n: size
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
