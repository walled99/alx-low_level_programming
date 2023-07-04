#include "main.h"

/**
 * _strchr - Entry point
 *
 * Description: locate char and get it and next char
 * @s: pointer of char
 * @c: char to found
 *
 * Return: pointer have fonded char and char
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	char *found;

	while (s[i])
	{
		if (s[i] == c)
		{
			found = &s[i];
			return (found);
		}
		i++;
	}
	found = &s[i];
	return (found);
}
