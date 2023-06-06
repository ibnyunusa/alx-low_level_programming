#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate the character of a string
 * @s: the string
 * @c: character located
 * Return: NULL, if character not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
