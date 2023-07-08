#include "stdio.h"

/**
 * main - entry point
 *
 * Description: print file name
 * @argc: int
 * @argv: pointer
 *
 * Return: 0 Success
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
