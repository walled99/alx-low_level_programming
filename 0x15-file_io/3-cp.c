#include "main.h"

/**
 * cr_buffer - 1024 bytes allocatiotinon
 * Description: allocate 1024 bytes
 * @f: The name of the file buffer is storing chars for.
 *
 * Return: address of buffer allocation
 *
*/

char *cr_buffer(char *f)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_fd - Entry point
 *
 * Description: close df
 *
 * @fd: The file descriptor to be closed.
 * Return: void
 */

void close_fd(int fd)
{
	int cs;

	cs = close(fd);

	if (cs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 * Description: program start here
 * @argc: counter for arguments
 * @argv: arguments passed to program
 *
 * Return: success (0).
 *
 */

int main(int argc, char *argv[])
{
	int from, to;
	int r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = cr_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(buff);
	close_fd(from);
	close_fd(to);
	return (0);
}
