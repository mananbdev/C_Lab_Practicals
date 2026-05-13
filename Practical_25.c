/* 
Write a menu driven C program to show the use of in-built string functions like 
1. strlen
2. strcat
3. strcpy
4. strcmp
5. strrev 
*/
#include <stdio.h>
#include <string.h>
int main()
{
    int ch,len;
    printf("Menu\n");    
    printf("1. strlen\n2.strcat\n3.strcpy\n4.strcmp\n5.strrev\n");
    scanf(" %d",&ch);
    getchar();
    char str_1[100],str_2[100];
    switch (ch)
    {
    case 1:
        printf("Enter a string : ");
        fgets(str_1,100,stdin);
        printf("Length of string is %d",(strlen(str_1)-1));        
        break;
    case 2:
        printf("Enter a string 1 : ");
        fgets(str_1,100,stdin);
        printf("Enter a string 2 : ");
        fgets(str_2,100,stdin);

        str_1[strcspn(str_1, "\n")] = '\0';
        str_2[strcspn(str_2, "\n")] = '\0';

        strcat(str_1,str_2);
        printf("After concatination : %s",str_1);
        break;
    
    case 3:
        strcpy(str_1,"Hello");

        printf("Copied string: %s", str_1);
        break;
    case 4:
        printf("Enter a string 1 : ");
        fgets(str_1,100,stdin);
        printf("Enter a string 2 : ");
        fgets(str_2,100,stdin);

        int a = strcmp(str_1,str_2);
        if(a==0){
            printf("Equal string");
        }
        else if(a<0){
            printf("String 1 smaller than String 2");
        }
        else{
            printf("String 2 smaller than String 1");
        }
        break;
    case 5:
        printf("Enter a string : ");
        fgets(str_1,100,stdin);
        strrev(str_1);
        printf("Reversed string : ",str_1);
        break;


    
    default:
        printf("Invalid");
        break;
    }

}