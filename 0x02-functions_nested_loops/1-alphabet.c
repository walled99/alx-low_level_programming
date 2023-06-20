#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: print letters from a to z
 *
 * Return: void
*/

void print_alphabet(void)
{
	int ch = 97;

	while (ch < 123)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return;
}
