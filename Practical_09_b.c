/*
Write the following programs using switch case statement:
•	To check that an input alphabet is vowel or consonant 
•	To check whether a number is positive, negative or zero 
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    if(num>0){
        printf("Positive");
    }
    else if(num<0){
        printf("Negetive");
    }
    else{
        printf("Zero");
    }
    return 0;
    
}