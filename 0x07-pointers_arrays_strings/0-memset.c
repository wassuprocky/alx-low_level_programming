#include "main.h"
/**
 **_memset -Fills the memeory witha constant byte
 *@s: Refers to the pointer
 *@b: Refers to the character used
 *@n: Refers to the number of maximum times to run 
 * Return:s when successful.
 */

char *_memset( char *s, char b, unsigned int n)
{
	unsigned int i;
	for( i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
