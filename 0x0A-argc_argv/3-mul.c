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
	int s = 0;

	if (argc == 3)
	{
		s = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", s);
		return (0);
	}
	printf("Error\n");
	return (1);
}
