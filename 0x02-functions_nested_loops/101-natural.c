#include <stdio.h>

/**
 * main - prints the sum of all mult of 3 and 5 to 1024
 * Return: always 0
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
        printf("%d\n", z);
	return (0);
}
