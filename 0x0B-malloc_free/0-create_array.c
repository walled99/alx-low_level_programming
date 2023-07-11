#include <stdlib.h>
#include "main.h"

/**
 * create_array - ENtry point
 *
 * Description: create a char array
 * @size: unsigned integer
 * @c: char value
 *
 * Return: NULL - Pointer
*/

char *create_array(unsigned int size, char c)
{
	char *ch;

	if (size == 0)
		return (NULL);
	ch = malloc(sizeof(c) * size);
	if (ch == NULL)
		return (NULL);
	ch[0] = c;
	return (ch);
}
