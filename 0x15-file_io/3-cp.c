#include "main.h"

/**
 * buffer - Entry point
 * Description: allocate 1024 bytes
 *
 * @file:buffer name to store char.
 *
 * Return: A pointer to bufferr
 */
char *cr_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file_dp - entry point
 * Description: to close fd
 *
 * @fd: The file descriptor to be closed.
 * Return: void.
 */
void close_file_dp(int fd)
{
	int f;

	f = close(fd);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point.
 * Description: take copy of file to another
 *
 * @argc: arguments number.
 * @argv: array of pointers.
 *
 * Return: 0 on success.
 *
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = cr_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file_dp(from);
	close_file_dp(to);

	return (0);
}
