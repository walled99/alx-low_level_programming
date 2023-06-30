#include "main.h"

/**
 * _strncpy - entry point
 *
 * Description: copy from source to dest
 * @dest: pointer points to string
 * @src: pointer points to string
 * @n: nymber of bytes to copy
 *
 * Return: pointer
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i < n; i++)
		dest[i] = '\0';
}

