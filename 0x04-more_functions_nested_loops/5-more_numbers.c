#include "main.h"
#include <stdio.h>

/**
 * more_numbers - write a program that print 1 to 14 ten times
 * @a: first integer
 * @i: second integer
 * Return: Alway(success)
 */
void more_numbers(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
