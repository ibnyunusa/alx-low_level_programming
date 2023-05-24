#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - write a program that print a-z x10
 * Return: Always(success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}

		putchar('\n');

		i++;
	}
}
