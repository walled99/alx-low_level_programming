#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Entry point
 * Description: print all formate
 * @format: constant pointer
 * Return: void
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);
	while (format[i] && format)
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(list, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(list, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", sep, str);
			break;
		default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(list);
}
