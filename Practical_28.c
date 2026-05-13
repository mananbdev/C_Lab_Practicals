/* Write a C program to add two distances in inch & feet using the concept of structures. */
#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet;
    if (result.inches >= 12.0) {
        result.feet++;
        result.inches -= 12.0;
    }
    return result;
}

int main() {
    struct Distance d1, d2, sum;

    printf("Enter feet and inches for first distance: ");
    scanf("%d %f", &d1.feet, &d1.inches);

    printf("Enter feet and inches for second distance: ");
    scanf("%d %f", &d2.feet, &d2.inches);

    sum = addDistances(d1, d2);

    printf("Sum = %d feet %.1f inches\n", sum.feet, sum.inches);

    return 0;
}