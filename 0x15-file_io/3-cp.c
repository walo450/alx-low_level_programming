#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/*char *create_buffer(char *file);*/

/**
 * create _buffer - Allocates 1024bytes of a buffer
 * @file: the name of the buffer storing chrs.
 *
 * Return: pointer to the new allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
