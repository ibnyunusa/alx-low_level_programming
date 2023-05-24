#include "main.h"
#include <stdio.h>

/**
 * main - check for the lowercase alphabet
 * Return: 1(sucess)
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	if (r >= 97 && r <= 122)
	{
		return (1);
	}

	return (0);
}
