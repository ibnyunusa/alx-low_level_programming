#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - program a code to print a diagonal line
 * @n: numbers of it will print
 * Return: Always(success)
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;

	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar('\n');
}

