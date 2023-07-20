#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 * Description: print numbers
 * @separator: String
 * @n: size of arg
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int value;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(ptr, unsigned int);
		printf("%i", value);
		if (i + 1 < n)
			printf("%s", separator ? separator : "");
	}
	printf("\n");
}
