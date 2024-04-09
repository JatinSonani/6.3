//Q.1 Write a Program to print the sum of all numbers from 1 to N using for loop.

#include<stdio.h>
main()
{
	int N, sum = 0;
	
	printf("Enter the Value N: ");
	scanf("%d" , &N);
	
		for (int i = 1; i <= N; ++i) {
        sum += i;
	}
	
	printf("Sum of 1 to %d: %d\n" , N , sum);
}