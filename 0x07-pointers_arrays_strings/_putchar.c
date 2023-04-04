#include "main.h"
#include <unstdio.h>

/**
 * _putchar - writes the charcter c stdout
 * @c: the charcter to print
 *
 * Return: 0 always
 * On error, -1 is returned, and error is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
