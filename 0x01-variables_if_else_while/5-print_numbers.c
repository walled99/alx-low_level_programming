#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print decimal number from 0 to 9
 *
 * Return: return 0 (successful)
 *
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);

}
