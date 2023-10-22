#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
  * main - check if a number is odd even or zero
  * Return:Always 0 if the operation was successful
  */


positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n==0)
		printf("is zero");
	else if(n>0){	
		printf("is positive");
	else
		printf("is negative");
	return (0);
}
