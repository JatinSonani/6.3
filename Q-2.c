//Q.2 Write a Program to print the factorial of number N using for loop.

#include<stdio.h>

main() 
{
    int n,i,factorial=1;

    printf("Enter a Value: ");
    scanf("%d", &n);

    if (n < 0) 
	{
        printf("negative number doesn't exist.\n");
    } else 
	{
        for (i = 1; i <= n; i++) 
		{
            factorial *= i;
        }

        printf("Factorial of %d = %d\n", n, factorial);
    }

}