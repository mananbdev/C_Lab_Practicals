/* 
Write a program to calculate the sum of array elements by passing it to a function.
*/
#include <stdio.h>
void sum_of_array(int ar[],int len)
{
    int sum=0;
    for(int j=0;j<len;j++)
    {
        sum = sum + ar[j];
    }
    printf("Sum of array elements : %d",sum);
}

int main()
{
    int arr[100],len;
    printf("Enter length of array \n");
    scanf("%d",&len);
    printf("Enter array \n");

    for(int i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum_of_array(arr,len);
}