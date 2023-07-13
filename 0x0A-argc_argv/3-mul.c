#include <stdio.h>
11;rgb:0000/0000/0000#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: nultiplication
 * @argc: argument counter
 * @argv: argument Vector
 *
 * Return: 0 , 1
*/

int main(int argc, char *argv[])
{
	int result = 0;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc == 3)
	{
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
	printf("Error");
	printf("\n");
	return (1);
}
