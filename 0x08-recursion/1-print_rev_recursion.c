#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print a string revisely
 * @s: the string to be printed
 *
 * Return: 0 Always success
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
