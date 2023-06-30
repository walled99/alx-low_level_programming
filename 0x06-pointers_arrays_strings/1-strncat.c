#include "main.h"

/**
 * _strncat - concatenate strings
 *
 * Description: concatenate Strings together
 *
 * @dest: pointer points to String destination
 * @src: Pointer points to String source
 * @n: number of bytes
 *
 * Return: pointer points to array of char
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; i < n; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
