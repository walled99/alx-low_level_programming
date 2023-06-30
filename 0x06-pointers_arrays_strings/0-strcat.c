#include "main.h"

/**
 * _strcat - concatenate strings
 *
 * Description: concatenate Strings together
 *
 * @dest: pointer points to String destination
 * @src: Pointer points to String source
 *
 * Return: pointer points to array of char
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	for (i = 0; i < src_len; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
