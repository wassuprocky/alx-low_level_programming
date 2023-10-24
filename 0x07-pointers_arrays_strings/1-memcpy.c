#include "main.h"

/**
 **_memcpy - The main function for alllocation
 *@dest: The destination address
 *@src: Source
 *@n : Maximut times to be added
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for(i = 0; i < n; i++)
	{
		dest[i]=src[i];
	}
	return (dest);
}
