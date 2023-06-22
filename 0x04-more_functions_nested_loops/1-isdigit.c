#include "main.h"

/**
 * _isdigit - entry point
 *
 * Description: check if it digit ot not
 * @c: value as integer
 *
 * Return: 1 (digit)
 * 0 (not a digit)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
