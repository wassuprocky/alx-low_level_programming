#include <stdio.h>
#include <stdlib.h>

/*
 * main - Prints out name
 * @argc: argument count
 * @argv: argument vector
 * @i:    counter
 *  summation: summation
 * Return: Always (0)
 */
int main(int argc, char  *argv[])
{
        int i;
        int summation=0;

        if (argc > 1 )
        {       
                for(i = 1 ;i < argc ;i++)
                {
                    if (atoi(argv[i])>0 )
                    {
                    summation += atoi(argv[i]);
                    }
                    else{
                        printf("Error\n");
                        return (1);
                    }
                }
                printf("%d\n" ,  summation);
        }
        else if (argc<=1)
        {
            printf("%d\n",0);
        }
        else
        {
                printf("Error\n");
                return (1);
        }
        return (0);
}                 
