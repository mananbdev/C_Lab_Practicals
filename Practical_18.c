/* 
Write a program to swap two variables using the concept of call by value and call by reference. 
*/

#include <stdio.h>

void swap_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside function after swap: a = %d, b = %d\n", a, b);
}
void swap_reference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    

    printf("Swap with call by value\n");
    swap_value(x, y);   // Call by value
    printf("After swap: x = %d, y = %d\n", x, y);
    x=10;
    y=20;
    printf("\n");
    printf("Swap with call by reference\n");

    swap_reference(&x,&y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}