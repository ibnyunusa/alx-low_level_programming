#include "main.h"

/**
 * _memcpy - program that copy a memory
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 * Return: number pointed to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

