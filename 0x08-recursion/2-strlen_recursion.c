#include "main.h"

/**
 * _strlen_recursion - entry point
 *
 * Description: length of String
 * @s : pointer to String
 *
 * Return: integer value
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (i);
	i++;
	return (i + _strlen_recursion(++s));
}
