#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - printing of alphabet a-z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
