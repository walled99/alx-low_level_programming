#include "variadic_functions.h"

/**
 * sum_them_all - Entry point
 * Description: summ all arguments
 * @n: size of arguments
 * Return: Integer 0 or sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ptr;

	if (n != 0)
	{
		va_start(ptr, n);
		sum = 0;
		for (i = 0; i < n; i++)
			sum += va_arg(ptr, unsigned int);
		return (sum);
	}
	return (0);
}
