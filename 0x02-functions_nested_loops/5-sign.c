#include "main.h"

/**
 * print_sign - entry point
 *
 * Description: check number sign
 * @n: number from user
 *
 * Return: 1 if is positive
 * 0 if equal 0
 * -1 if number is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
