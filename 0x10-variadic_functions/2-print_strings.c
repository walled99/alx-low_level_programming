#include "variadic_functions.h"

/**
 * print_strings - Entry point
 * Description: print Strings
 * @separator: String to separate printed strings
 * @n: size of arguments
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ptr, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i + 1 != n)
			printf("%s", separator ? separator : "");
	}
	printf("\n");
}
