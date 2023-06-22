#include "main.h"

/**
 * print_line - entry point
 *
 * Description: print a line
 * @n: number of _ will be printed
 *
 * Return: void
*/

void print_line(int n)
{
	for (; n > 0; n--)
		_putchar(95);
	if (n <= 0)
		_putchar('\n');
}
