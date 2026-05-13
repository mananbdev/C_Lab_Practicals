/*8. 	Write a Program to find the greatest among three numbers using:
•	Conditional Operator
•	If-Else statement	
*/
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a>b){
        if (a>c){
            printf("Maximun : %d",a);
        }
        else{
            printf("Maximum : %d",c);
        }
    }
    else if(b>c){
        printf("Maximun : %d",b);
    }
    else{
        printf("Maximum : %d",c);

    }
    return 0;

}