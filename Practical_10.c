/* Write a program using while loop to print the sum of first n natural numbers */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter N : ");
    scanf("%d",&n);
    int i=1;
    int sum=0;

    while(i<=n)
    {
        sum += i;
        i++;
    }
    printf("sum of first n natural numbers : %d",sum);
    return 0;

}