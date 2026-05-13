/* 
Write a Program in C to display the total number of appearances of a substring provided as input by the user in a given string.  */
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], sub[100];
    int count = 0;
    int i, j;

    printf("Enter main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter substring: ");
    fgets(sub, sizeof(sub), stdin);

    // Remove newline characters
    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    int len_str = strlen(str);
    int len_sub = strlen(sub);

    
    for (i = 0; i <= len_str - len_sub; i++) {

        
        for (j = 0; j < len_sub; j++) {
            if (str[i + j] != sub[j])
                break;
        }

        if (j == len_sub) {
            count++;
        }
    }

    printf("Total occurrences: %d", count);

    return 0;
}