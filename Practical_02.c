/*Write a Program to show the use to input (Scanf)/output (Printf) statements and block structure of C-program by highlighting the features of "stdio.h".*/

#include <stdio.h>
int main()
{
    int num=0;
    printf("Enter a number ");
    scanf("%d",&num);
    printf("Number : %d",num);
    return 0;
}