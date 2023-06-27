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

	for (i = 0; *(str + i); i++)
		continue;
	for (j = i - 1; *(str + j); j--)
		_putchar(*(str + j));
}
