#include "main.h"

/**
 * _abs - entry point
 *
 * Description: find absolute value
 * @a: any number
 *
 * Return: absolute value of number
*/

int _abs(int a)
{
	if (a < 0)
	{
		a *= -1;
		return (a);
	}
	return (a);
}
