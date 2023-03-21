#include <unistd.h>

/**
 * main - main function
 *
 * Return: 0 always
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
