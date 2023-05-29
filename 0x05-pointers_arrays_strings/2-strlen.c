#include "main.h"
#include <stdio.h>

/**
 * _strlen - This programme count the length of a string
 * @s: string
 * Return: strign length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
