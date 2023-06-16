#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print all letters unless e and q
 *
 * Return: return 0 (success)
 *
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);

}
