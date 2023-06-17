#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print number combination
 *
 * Return: return 0 (success)
 *
*/

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;

	}
	putchar('\n');
	return (0);
}
