#include "main.h"

/**
 * string_toupper - entry point
 *
 * Description: from lower to upper case
 * @s: pointer point to array of char
 *
 * Return: pointer points to char
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
