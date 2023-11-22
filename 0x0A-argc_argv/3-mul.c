#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * main - Prints out name
 * @argc: argument count
 * @argv: argument vector
 * @i:    counter
 * @mult: result
 * Return: Always (0)
 */
int main(int argc, char  *argv[])
{
        int i;
        int mult=1;

        if (argc > 1)
        {
		for(i = 1 ;i < argc ;i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
