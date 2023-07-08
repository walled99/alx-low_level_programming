#include <stdio.h>

/**
 * main - Ebtry point
 *
 * Description: print number in argv
 * @argc: integer
 * @argv: pointer
 *
 * Return: 0 Success
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
