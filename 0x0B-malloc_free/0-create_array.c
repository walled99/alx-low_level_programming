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
	unsigned int j = 0;

	ch = malloc(sizeof(char) * size);
	if (size == 0 || ch == NULL)
		return (NULL);
	while (j < size)
	{
		ch[j] = c;
		j++;
	}
	return (ch);
}
