/* 6.	Write a program to evaluate each of the following equations.
(i) V = u + at. (ii) S = ut+1/2at2 (iii) T=2*a+√b+9c (iv) H=√b2+p2	
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float u, a, t, s, v;
    float b, c, p;
    float T, H;

    
    printf("Enter u, a, t: ");
    scanf("%f %f %f", &u, &a, &t);

    v = u + a * t;
    s = u * t + 0.5 * a * t * t;

    printf("V = %.2f\n", v);
    printf("S = %.2f\n", s);

    
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    T = 2 * a + sqrt(b) + 9 * c;
    printf("T = %.2f\n", T);

    
    printf("Enter b, p: ");
    scanf("%f %f", &b, &p);

    H = sqrt(b * b + p * p);
    printf("H = %.2f\n", H);

    return 0;
}
