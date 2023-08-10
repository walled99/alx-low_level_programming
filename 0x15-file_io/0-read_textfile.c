#include "main.h"

/**
 * read_textfile - Entry point
 * Description: read and wrtie to stdout
 * @filename: String
 * @letters: int
 * Return: signed int of written letters
 * or 0 on fail
 *
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte;
	char buf[1024 * 8];
	int fb;

	open(filename, O_RDONLY);
	if (fb < 0 || filename == NULL)
	{
		return (0);
	}
	byte = read(fb, buf, letters);
	byte = write(STDOUT_FILENO, buf, byte);
	close(fb);
	return (byte);
}
