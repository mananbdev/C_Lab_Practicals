/* Write a C program to add two complex numbers using the concept of structures in C. */
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

void display(struct Complex c) {
    if (c.imag < 0)
        printf("%.2f - %.2fi\n", c.real, -c.imag);
    else
        printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    struct Complex c1, c2, sum;

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    sum = addComplex(c1, c2);

    printf("First:  ");
    display(c1);
    printf("Second: ");
    display(c2);
    printf("Sum:    ");
    display(sum);

    return 0;
}
