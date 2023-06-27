#include "main.h"

/**
 * puts_half - enter point
 *
 * Description: print last char
 * @str: pointer
 *
 * Return: void
*/

void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; *(str + i); i++)
		continue;
	n = ((i - 1) - 1) / 2;
	if (n % 2 != 0)
		n += 1;
	for (i = n + 1; *(str + i); i++)
		_putchar(*(str + i));
	_putchar('\n');
}

