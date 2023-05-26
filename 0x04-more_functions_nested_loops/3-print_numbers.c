#include "main.h"
#include <stdio.h>

/**
 * print_numbers - write a code that print numbers from 0 - 9
 * Return: Always(success)
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
