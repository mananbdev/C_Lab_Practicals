/* 
Write a program to find the factorial of a number by using the concept of recursion
*/
#include <stdio.h>
int fact(int n)
{
    if(n==1){
        return 1;
    }        
    return n * fact(n-1);
}

int main()
{
    int num;
    printf("Enter a number \n");
    scanf(" %d",&num);
    int factorial = fact(num);
    printf("Factorial of %d is %d",num,factorial );
    return 0;
}
