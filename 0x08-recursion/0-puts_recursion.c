#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * Description: print a String recursivly
 * @s: pointer to a string
 *
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(++s);
}
