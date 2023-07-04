#include "main.h"

/**
 * _memcpy - Entry point
 *
 * Description: copy a block of memory from src to dest
 * @dest: pointer that will take copy
 * @src: pointer will be souce
 * @n: number of bytes space to copy
 *
 * Return: dest pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
