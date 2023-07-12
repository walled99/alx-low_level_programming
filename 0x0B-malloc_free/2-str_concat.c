#include "main.h"
11;rgb:0000/0000/0000#include <stdlib.h>

/**
 * str_concat - Entry point
 *
 * Description: concatenation method
 * @s1: pointer
 * @s2: pointer
 *
 * Return: pointer chars
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j = 0;
	int size1;
	int size2 = 1;
	char *str3;

	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;
	str3 = malloc(sizeof(char) * (size1 + size2));
	for (i = 0; s1[i] != '\0'; i++, j++)
		str3[j] = s1[i];
	for (i = 0; s2[i] != '\0'; i++, j++)
		str3[j] = s2[i];
	return (str3);
}
