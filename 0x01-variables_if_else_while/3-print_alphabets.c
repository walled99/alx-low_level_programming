#include <stdio.h>

/**
 * main - entry point
 *
 * Description: write lower and upper case
 *
 * Return: return 0
 *
*/

int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\n')
	{
		putchar(str[i]);
		i++;
	}
	i=0;
	while (str[i] != '\n')
	{
		str[i] = str[i] - 32;
		putchar(str[i]);
		i++;
	}
	return (0);
}
