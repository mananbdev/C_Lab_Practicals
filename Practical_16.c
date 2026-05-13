/* 
16.	Write a program to check that the given number is prime, Armstrong or perfect using the concept of functions.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf(" %d",&num);
    int check_prime=0;
    int sum_perfect=0;

    // to check prime and perfect number
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            check_prime++;
            sum_perfect = sum_perfect + i;
        }
    }
    if(check_prime==1)
    {
        printf("It is a prime number \n");
    }
    else{
        printf("It is not a prime number \n");
    }
    if(sum_perfect == num)
    {
        printf("It is a perfect number \n");
    }
    else{
       printf("It is not a perfect number \n"); 
    }

    // to check Amstrong
    int clone1 = num,clone2=num;
    int digit=0;
    int sum_armstrong=0;
    while(clone1 !=0)
    {
        clone1 /= 10;
        digit++;
    }
    while(clone2 != 0)
    {
        sum_armstrong = sum_armstrong + pow(clone2%10,digit);
        clone2 /=10;
    }
    if(sum_armstrong == num)
    {
        printf("It is armstrong number. \n");
    }
    else{
        printf("It is not armstrong number. ");
    }

    return 0;

}