#include "main.h"
#include <stdio.h>

/**
 * rev_string - Write a function that reverses a string.
 * @s: string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int length = strlen(s);
   	int start = 0;
    	int end = length - 1;

    	while (start < end)
	{
        	char temp = s[start];
        	s[start] = s[end];
       	 	s[end]	start++;
        	end--;
	}
}
