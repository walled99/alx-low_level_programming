#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all argument in argv
 * @argc: integer
 * @argv: pointer
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
