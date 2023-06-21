#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 *
 *Description: print natural num from n to 98
 *@n: value of n
 *
 *Return: void
*/

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
			break;
		}
		printf("%d, ", n);
		n++;
	}

	while (n >= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
			break;
		}
		printf("%d, ", n);
		n--;
	}
	printf("\n");
}
