#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print 0-9 without 2 and 4
 * @c: check the code
 * Return: Always (success)
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
