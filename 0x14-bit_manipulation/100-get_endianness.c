#include "main.h"

/**
 * get_endianness - entry point of function
 *
 * Description: get endianness of system
 *
 * Return: 0 for big end
 * 1 if end small
 *
*/

int get_endianness(void)
{
	unsigned long int d;

	d = 1;
	return (*(char *)&d);
}
