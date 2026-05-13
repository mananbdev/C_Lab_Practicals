/* 14.	Write a program to print the following patterns:

b)
          *
        * *
      * * *
    * * * *
  * * * * *
* * * * * *

*/
#include <stdio.h>

int main() {
    int rows = 6;

    for (int i = 1; i <= rows; i++) {

        // Print leading spaces
        for (int s = 1; s <= 2 * (rows - i); s++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
