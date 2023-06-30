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
	int j;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; i < n && src[j] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
		j++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
