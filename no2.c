/*Question 2: Fibonacci Sequence
Write a program to generate the Fibonacci sequence up to 100.*/
#include<stdio.h>
void generateFibonacci(int i);
int main()
{
	int i=100;
	gererateFibonacci(i);
	return 0;
}
void generateFibonacci(int i)
{
	int first=0, second=1, next;
	int j;
	printf("sequence up to %d:\n",i);
	printf("%d, %d", first,second);
	for(j=2; j<=i; j++)
	{
		next= first + second;
		if(next>i)
		{
			break;
		}
		printf(",%d",next);
		first=second;
		second=next;
	}
}