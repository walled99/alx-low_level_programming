#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: print letters from a to z 10 times
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	int ch;
	int i;

	for (i = 1; i < 11; i++)
	{
		ch = 97;
		while (ch < 123)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
