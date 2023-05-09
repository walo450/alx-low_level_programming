#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fn);
/**
 * create_buffer- creates a buffer
 * @file: the file buffer is storing char
 *
 * Return: A pointer to the newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "ERROR: can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_files- closes a file
 * @fn: the file to be closed
 */
void close_file(int fn)
{
	int d;

	d = close(fn);
	if (d == -1)
	{
		dprintf(STDERR_FILENO, "ERROR:can't close fn %d\n", fn);
		exit(100);
	}
}
int main(int argc, char *argv[]);
/**
 * main-copies the content of one file to another.
 * @agrv: number of arguments given to the program
 * @argc: an array of pointer to the program
 *
 * Return: 0
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

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
/**
 * Description:if argument count is correct- exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
