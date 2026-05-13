/* 13.	Write a program to generate the Fibonacci series. */\
#include <stdio.h>
int main()
{
    int n=0;
    printf("Enter N : ");
    scanf("%d",&n);
    int a=0;
    int b = 1;
    int sum=0;
    printf("%d %d ",a,b);
    for(int i=3;i<=n;i++)
    {
        sum = a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
    return 0;
}