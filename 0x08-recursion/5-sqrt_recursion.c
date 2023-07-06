#include "main.h"

/**
 * _sqrt_recursion - Entry point
 *
 * Description: pass two paramaters two other sqrt
 * @n: integer value to find sqrt
 *
 * Return: sqrt integer
*/

int _sqrt_recursion(int n)
{
	return (sqrt_mine(n, 1));
}

/**
 * sqrt_mine - Entry pointt
 *
 * Description: cal sqrt
 * @n: integer value
 * @num: integer val start from one
 *
 * Return: square root
*/

int sqrt_mine(int n, int num)
{
	int res = num * num;

	if (n == res)
		return (num);
	else if (n < res)
		return (-1);
	return (sqrt_mine(n, ++num));
}
