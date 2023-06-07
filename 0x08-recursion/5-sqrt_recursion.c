#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number to with the root is returned
 *
 * Return: Nothing
 */
int _sqrt_recursion(int n)
{
	return (int _sqrt_(n, 1));
}

/**
  * _sqrt - Calculates natural square root
  * @n: number to calculate the square root
  * @i: iterate number
  *
  * Return: the natural square root
  */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
