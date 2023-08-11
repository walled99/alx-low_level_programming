#include "main.h"

/**
 * append_text_to_file - Entry point
 * Description: append text to end of file
 * @filename: namfe of file
 * @text_content: text will be written
 * Return: 1 on succces
 * -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fileo;
	int filew;
	int len;

	if (filename == NULL)
		return (-1);
	len = 0;
	while (*text_content++)
		len++;
	fileo = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		filew = write(fileo, text_content, len);
		if (filew < 0)
			return (-1);
	}
	if (fileo < 0)
		return (-1);
	close(fileo);
	return (1);

}
