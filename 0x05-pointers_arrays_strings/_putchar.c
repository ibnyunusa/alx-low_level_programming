#include <unistd.h>
#include "main.h"

/**
 * _putchar - Entry point of the code
 *
 * Return: Always 0
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
