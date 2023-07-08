#include "main.h"

/**
 * char *_strcpy - enter point
 * @dest: copy
 * @src: copy
 * Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int ll = 0;
	int xx = 0;

	while (*(src + ll) != '\0')
	{
		ll++;
	}
	for ( ; xx < ll ; xx++)
	{
		dest[xx] = src[xx];
	}
	dest[ll] = '\0';
	return (dest);
}
