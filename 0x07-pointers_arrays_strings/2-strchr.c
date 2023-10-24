#include "main.h"
#include <stdio.h>

/**
 * _strchr - Capturing the first occurence of @c
 * @c: This is the character being captured
 * @s: This is the string containgin c
 * Return: NULL if not found else pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
