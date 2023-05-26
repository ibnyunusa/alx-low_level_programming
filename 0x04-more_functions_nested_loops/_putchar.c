#include "main.h"
#include <unistd.h>

/**
 * _putchar - Entry point of the code
 *
 * Return: value 
 */

int _putchar(char c)
{
	return  write(1, &c, 1);
}
