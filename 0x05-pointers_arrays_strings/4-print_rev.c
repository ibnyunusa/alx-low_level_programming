#include "main.h"
#include <stdio.h>

/**
 * print_rev - Write a function that prints a string, in revise
 * @s: string
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0, index = 0;

	len = _strlen(s);
	for (index = len - 1; index >= 0; index--)
	{
		putchar(s[index]);
	}
	putchar('\n');
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	{
		inc++;
	}
	return (inc);
}
