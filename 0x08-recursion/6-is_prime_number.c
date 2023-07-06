#include "main.h"

/**
 * is_prime_number - entry point
 *
 * Description: check if prime or not
 * @n: integer
 *
 * Return: integer value
*/

int is_prime_number(int n)
{
	return (my_prime(n, 2));
}

/**
 * my_prime - entry point
 *
 * @n: integer value
 * @num: int value
 *
 * Return: integer number
*/

int my_prime(int n, int num)
{
	if (num >= n && n > 1)
		return (1);
	else if (n <= 1 || n % num == 0)
		return (0);
	return (my_prime(n, ++num));
}
