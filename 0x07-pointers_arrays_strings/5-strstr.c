#include "main.h"
/**
 * _strstr - Entry pointt
 * @haystack: pointer char
 * @needle: pointerr
 * Return: pointer (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *m = needle;

		while (*s == *m && *m != '\0')
		{
			s++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
