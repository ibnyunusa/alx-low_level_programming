#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code if it is upper or lower character.
 *@c: check the code
 * Return: 1 if c is upper and reture0 if lower.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
