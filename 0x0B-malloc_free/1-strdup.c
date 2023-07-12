#include "main.h"
#include <stdlib.h>

/**
 * *_strdup: Entry point
 * short description: pointer
 * Description: copy String to another.
 * @str: pointer to chars
 *
 * Return: NULL, or Pointer to Chars
*/

char *_strdup(char *str)
{
	int size = 0;
	int i;
	char *str2;

	for (i = 0; str[i] != '\0'; i++)
		size++;
	str2 = malloc(sizeof(char) * size);
	if (str == NULL || str2 == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		*(str2 + i) = str[i];
	return (str2);
}
