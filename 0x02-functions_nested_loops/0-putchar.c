#include "main.h"

/**
 * main - Entry points
 *
 * Description: print _putchar by usingg _putchar prototyp
 *
 * Return: 0 (success)
*/

int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while ( i < 8 )
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
