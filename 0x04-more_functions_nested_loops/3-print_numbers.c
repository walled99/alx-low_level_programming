#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: print from 0 to 9
 *
 * Return: void (success)
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);
	_putchar('\n');
}
