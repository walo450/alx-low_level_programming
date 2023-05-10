#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text file print to STDOUT
 * @filename: file name to be read
 * @letters: number of letter to be read
 * Return:  w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *name;
	ssize_t fn;
	ssize_t w;
	ssize_t q;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	name = malloc(sizeof(char) * letters);
	q = read(fn, name, letters);
	w = write(STDOUT_FILENO, name, q);

	free(name);
	close(fn);
	return (w);
}
