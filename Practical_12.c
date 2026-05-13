/* Write the program to count the digits in a number and then print the reverse of the number also. */

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int count=0,reverse=0;
    while(num!=0){
        reverse = reverse * 10 + num%10 ;
        count++;
        num /= 10;
    }
    printf("Digits in number : %d\n",count);
    printf("Reverse of number : %d",reverse);
    return 0;
    
}