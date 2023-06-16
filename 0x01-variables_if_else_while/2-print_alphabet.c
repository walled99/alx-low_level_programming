#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 *
 * Description: convert string to lower case
 *
 * Return: return 0 (success)
*/

int main(void)
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = str[i] + 32;
		putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
