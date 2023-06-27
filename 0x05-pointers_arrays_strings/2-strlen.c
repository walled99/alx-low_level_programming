#include "main.h"

/**
 * _strlen - entry point
 *
 * Description: get length of string
 * @s: pointer points to first value in String
 *
 * Return: value of i (success)
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		continue;
	return (i);
}
