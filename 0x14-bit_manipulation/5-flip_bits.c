#include "main.h"

/**
 * flip_bits - Entry point
 * Description: counter for bits
 *
 * @n: first number
 * @m: second number
 *
 * Return: bits number
 *
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int counter = 0;
	unsigned long int curr;
	unsigned long int exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = exc >> i;
		if (curr & 1)
			counter++;
	}

	return (counter);
}
