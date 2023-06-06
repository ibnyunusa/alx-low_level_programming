#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: s memory area
 * @b: source memory area
 * @n: bytes of memory area
 * Return: memory area returned
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
