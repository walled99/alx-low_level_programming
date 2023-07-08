#include "main.h"

/**
 * _memset - entry point
 *
 * Description: fill a block of memory with a particular value
 * @s: pointer
 * @b: value that will be filled
 * @n: space in memory
 *
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
