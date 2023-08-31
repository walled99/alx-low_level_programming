#include "main.h"

/**
 * get_bit - Entry point
 *
 * @n: integer to find
 * @index: place of bit
 *
 * Return: bit value
 *
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;

	return (bit);
}
