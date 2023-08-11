#include "main.h"

/**
 * create_file - entry point
 * Description: create a file
 * @filename: pointer to string (file name)
 * @text_content: string to write to file
 * Return: 1 (success) or -1 (unsuccess)
*/

int create_file(const char *filename, char *text_content)
{
	int f_d;
	int test;
	int length = 0;
	char *text_len;

	text_len = text_content;
	while (*text_len++)
		length++;

	if (filename == NULL)
		return (-1);
	f_d = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (f_d < 0)
		return (-1);
	test = write(f_d, text_content, length);
	if (test < 0)
		return (-1);
	close(f_d);
	return (1);
}
