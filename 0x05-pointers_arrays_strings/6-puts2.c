#include "main.h"

/**
 * puts2 - start point
 *
 * Description: print one and one not
 * @str: pointer to string
 *
 * Return: void
*/

void puts2(char *str)
{
	long int i;

	for (i = 0; *(str + i); i += 2)
		_putchar(*(str + i));
	_putchar('\n');
}
