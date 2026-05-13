/*
Write a program to display the sum of the digits of a number by using the concept of recursion.
*/
#include <stdio.h>
int sum(int n)
{
    if(n==0){
        return 0;
    }
    return n%10 + sum(n/10);
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf(" %d",&num);
    int su = sum(num);
    printf("Sum of digits of a number : %d",su);
    return 0;
}
