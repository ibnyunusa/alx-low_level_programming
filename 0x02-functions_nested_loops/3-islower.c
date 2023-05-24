#include "main.h"

/**
 * _islower - check for the lowercase alphabet
 * @c: is the character to be cheched
 * Return: 1(sucess)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
