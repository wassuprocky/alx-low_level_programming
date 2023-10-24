#include "main.h"
#include <stdio.h>

/**
 * _strspn - Main function of checking for number of bytes
 *
 * @s: Main string
 * 
 * @accept: String to check
 *
 * Return: number of times
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int total = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (int j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				total += 1;
			}
		}
	}
	return (total);
}
