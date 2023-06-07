#include "main.h"

/**
 * _pow_recursion - print the power of and int
 * @x: the value rise to the power
 * @y: the power rised
 *
 * Return: The value gotten
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
