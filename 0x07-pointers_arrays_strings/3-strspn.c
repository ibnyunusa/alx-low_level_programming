#include "main.h"

/**
 * _strspn - programme that gets the length of a prefix substring.
 * @s: pointer to the string
 * @accept: pointer to the characters to accept in the prefix substring.
 * rreturn: numbers of bytes in the init statement
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b = 0, t = 0;

	while (accept[a])
	{
		b = 0;
	}
	while (s[b] != 32)
	{
		if (accept[a] == s[b])
		{
			t++;
		}
		b++;
	}
	a++;
	return (t);
}

