#include "main.h"
#include <stdio.h>

/**
 * print_numbers - write a code that print numbers from 0 - 9
 * Return: Always(success)
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
