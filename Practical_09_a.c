/* Write the following programs using switch case statement:
•	To check that an input alphabet is vowel or consonant 
•	To check whether a number is positive, negative or zero
*/

#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    ch = tolower(ch);
    if (ch=='a' || ch=='e' ||ch=='i'||ch=='o' || ch=='u')
    {
        printf("It is a vowel");
    }
    else {
        printf("It is a consonant");
    }
    return 0;    
}