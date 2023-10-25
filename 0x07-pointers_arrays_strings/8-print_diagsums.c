#include "main.h"

void print_diagsums(int *a, int size)
{
	unsigned int sum;
        int i;
	unsigned int sum_2;
	
	for (i = 0; i < size; i++)
	{
		sum += a[i*size+i];
		sum_2 += a[i*size+(size-i-1)];
	}
	printf("%d, %d",sum,sum_2); 

}
