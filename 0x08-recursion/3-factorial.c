#include "main.h"

/**
 * factorial - Entry point
 *
 * Description: find factorial
 * @n: interger value
 *
 * Return: integer
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
