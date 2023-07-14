#include <stdlib.h>
#include "main.h"

/**
* _calloc - Entry point
*
* @nmemb: Integer
* @size: Integer
*
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		p[b] = 0;
	return (p);
}
