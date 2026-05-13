/* 
 Write a program to calculate the area and circumference of a circle using functions.
*/
#include <stdio.h>

void area(float rad)
{
    float area = 3.14* (rad*rad);
    printf("Area of circle : %.2f\n",area);
}

void circumference(float r)
{
    float cir = 2 * 3.14 * r;
    printf("Circumference of circle : %.2f\n",cir);
}

int main()
{
    float radius;
    printf("Enter the radius of circle : ");
    scanf("%f",&radius);
    area(radius);
    circumference(radius);
    return 0;
}