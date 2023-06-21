#include "main.h"

/**
 * print_last_digit - entry pouint
 *
 * Description: print last digit of a number
 * @n: number as integer
 *
 * Return: number as last digit (success)
*/

int print_last_digit(int n)
{
	if (n >= 0)
	{
		n %= 10;
		_putchar(48 + n);
		return (n);
	}
	else
	{
		n *= -1;
		n %= 10;
		_putchar(48 + n);
		return (n);
	}
}
