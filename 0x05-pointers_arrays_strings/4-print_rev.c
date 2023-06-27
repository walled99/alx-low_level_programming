#include "main.h"

/**
 * print_rev - start point
 *
 * Description: print string in reverse
 * @s: pointer to string
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i, j;

	for (i = 0; *(s + i); i++)
		continue;
	for (j = i - 1; *(s + j); j--)
		_putchar(*(s + j));
}
