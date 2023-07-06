#include "main.h"

/**
 * _pow_recursion - entry point
 *
 * Description: find power value
 * @x: base number
 * @y: power number
 *
 * Return: integer value
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
