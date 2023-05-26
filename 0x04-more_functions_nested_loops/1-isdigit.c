#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check code if c is digit or alpherbet
 * @c: check the code
 * Return: 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
