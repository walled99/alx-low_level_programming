#include <stdio.h>

/**
 *main - Entry point
 *
 *
 *
 *
 *
*/

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	printf("Error");
	printf("\n");
	return (1);
}
