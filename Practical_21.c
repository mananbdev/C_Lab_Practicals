/* Write a program to show the use of passing pointer as arguments to the functions. */
#include <stdio.h>

void increment(int *n) {
    (*n)++;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void square(float *n) {
    *n = (*n) * (*n);
}

void sumAndAverage(int *arr, int size, int *sum, float *avg) {
    *sum = 0;
    for (int i = 0; i < size; i++)
        *sum += arr[i];
    *avg = (float)(*sum) / size;
}

void findMinMax(int *arr, int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
    }
}

int main() {
    printf("===== Passing Pointers as Function Arguments =====\n");

    int num = 10;
    printf("\n1. Increment using pointer:\n");
    printf("   Before: %d\n", num);
    increment(&num);
    printf("   After:  %d\n", num);

    int x = 25, y = 75;
    printf("\n2. Swap using pointers:\n");
    printf("   Before: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("   After:  x = %d, y = %d\n", x, y);

    float val = 6.0;
    printf("\n3. Square using pointer:\n");
    printf("   Before: %.2f\n", val);
    square(&val);
    printf("   After:  %.2f\n", val);

    int arr[] = {10, 20, 30, 40, 50};
    int size = 5, sum;
    float avg;
    printf("\n4. Sum and Average using pointers:\n");
    printf("   Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    sumAndAverage(arr, size, &sum, &avg);
    printf("\n   Sum     = %d\n", sum);
    printf("   Average = %.2f\n", avg);

    int min, max;
    printf("\n5. Min and Max using pointers:\n");
    printf("   Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    findMinMax(arr, size, &min, &max);
    printf("\n   Min = %d\n", min);
    printf("   Max = %d\n", max);

    return 0;
}