/* 5. Write a Program to perform addition, subtraction, division and multiplication of two numbers given as input by the user.*/

#include <stdio.h>
int main()
{
    float num1,num2;
    printf("Enter two numbers : ");
    scanf("%f",&num1);
    scanf("%f",&num2);
    printf("Sum : %f\n",(num1 + num2));
    printf("Diffrence : %f\n",(num1 - num2));
    printf("Multiply : %f\n",(num1 * num2));
    printf("Division : %f\n",(num1 / num2));
    return 0;     
}