#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print base 16 hexcadecimal
 *
 * Return: return 0 (success)
 *
*/

int main(void)
{
	char ch = 48;

	while (ch <= 'f')
	{
		if (ch == 58)
			ch = 97;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
