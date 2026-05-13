/* Write a program to swap two variables:
a) By using temporary variable.
b) Without using temporary variable
*/
#include <stdio.h>
int main()
{
    int num1=0;int num2=0 ;
    printf("Enter 2 numbers : ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping \n");
    printf("First number : %d\n",num1);
    printf("Second number : %d\n",num2);
    return 0;

}
