#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: check if input is a letter
 * @c: input from user as character
 *
 * Return: return 1 if letter
 * return 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
