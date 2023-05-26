#include "main.h"
#include <stdio.h>

/**
 * print_line - program a code to draw aline
 * @n: check code
 * Return: Always(succeas)
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
