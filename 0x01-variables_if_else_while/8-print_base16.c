#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0 always
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j < 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
