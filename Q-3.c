//Q.3 Write a Program to print the multiplication table of the number N using any type of loop.

#include <stdio.h>

main() 
{
    int n,i;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", n, i, n * i);
    }

}