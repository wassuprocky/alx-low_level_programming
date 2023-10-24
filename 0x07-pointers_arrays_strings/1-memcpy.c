#include "main.h"

/**
 * _memcpy - The main function for allocation of
 * memeory from @ source to @dest in @n number of times
 *
 * @dest: The destination address
 *
 * @src: Source
 *
 * @n: Maximut times to be added
 *
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
