#include "main.h"

/**
 * swap_int - entry point
 *
 * Description: swaps the values of two integers
 * @a: pointer hold address of var whose type int
 * @b: pointer hold add of var whose type int
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
