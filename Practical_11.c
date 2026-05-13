/* Write a program to check a number is Armstrong or not using For loop.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    int count;
    int clone =num;
    while(clone!=0)
    {
        clone = clone/10;
        count++;
    }
    int sum=0,clone2=num;
    while(clone2 !=0)
    {
        sum = sum + pow((clone2%10),count);
        clone2 = clone2/10;
    }
    if (sum==num)
    {
        printf("Its a Amstrong number");
    }
    else
    {
        printf("It is not a Amstrong number");
    }
    return 0;


}
