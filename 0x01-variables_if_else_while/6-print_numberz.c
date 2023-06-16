#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print number from 0 to 9
 * with putchar only
 *
 * Return: return 0 (successful)
 *
*/

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
