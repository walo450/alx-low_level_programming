#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
