#include "main.h"

/**
 * _isupper - entry point
 *
 * Description: check if letter is upper
 * @c: value of entered char in ASCII
 *
 * Return: 1 (upper case)
 * 0 (lower case)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
