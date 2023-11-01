#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *mem;
       	if (size ==0);
       		return NULL;
    	mem=malloc(sizeof(char)*size);
   	
       	for(i=0;i<size;i++)
	{
	       	mem[i]=c;
    	}
    	if (NULL)
        	return mem;
}
