#include "main.h"

/**
 *_isalpa - check alphabetic character
 *
 *Return: 1 for chactar 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
