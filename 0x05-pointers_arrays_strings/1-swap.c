#include <stdio.h>
#include "main.h"

/**
 * swap_int - write a program that swap the value of a and b
 * @a: first integer
 * @b: second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
