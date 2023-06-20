#include "main.h"

/**
 * _islower - entery point
 *
 * Description: check if letter lower or upper
 * @c: number that checked as character
 *
 * Return: return 1 (lower case)
 * return 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97)
		return (1);
	else
		return (0);
}
