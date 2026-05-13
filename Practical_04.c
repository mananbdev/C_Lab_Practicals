/* 4.	Write a program to calculate the area and the circumference of a circle by using radius as the input provided by the user. */

#include <stdio.h>
#include <math.h>
int main()
{
    double radius=0;
    printf("Enter radius of a circle : ");
    scanf("%lf",&radius);
    double  circumference= 2 * 3.147 * radius;
    double  area = 3.14 * pow(radius,2);
    printf("Area : %lf \n",area);
    printf("Circumference : %lf",circumference);
    return 0;
}