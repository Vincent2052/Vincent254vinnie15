/*Write a program that takes an integer as input and returns an integer with reversed digit 
ordering.*/
#include<stdio.h>
#include<math.h>
int main ()
{
int n,rev=0,rem;
printf("enter the integer\n");
scanf("%d",&n);
while(n!=0)
    {
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
    }
    printf("revrsed no=%d",rev);
    return 0; 
    }

