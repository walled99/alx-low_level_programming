#include "main.h"

/**
 * _puts - entry point
 *
 * Description: prints a string, followed by a new line
 * @str: pointer points to address
 *
 * Return: void
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
