#include "main.h"
#include <stdio.h>

/**
 * _puts - Write a function that prints a string, followed by a new line.
 * @str: string to be printed
 * Return: 0 Always
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
