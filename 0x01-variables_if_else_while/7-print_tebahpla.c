#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print letters in reverse
 *
 * Return: return 0 (success)
 *
*/

int main(void)
{
	char cha = 'z';

	while (cha >= 'a')
	{
		putchar(cha);
		cha--;
	}
	putchar('\n');
	return (0);
}
