/* 
Write a program to perform the following operations on 1D-Array:
1.	Insert
2.	Update
3.	Delete
4.	Display
5.	Search
*/
#include <stdio.h>
int main()
{
    int ori_arr[100] = {10,20,40,50,5};   // ORIGINAL ARRAY
    int ch;  // to store choice of the user.
    printf("Original array : {10,20,40,50,5} \n");
    do
    {
        printf("\n");
        printf("Enter your choice \n");
        printf("1. Insert\n2. Update\n3. Delete\n4.Display\n5. Search\n6. Exit\n");
        scanf(" %d",&ch);
        int position , num;
        switch (ch)
        {
        case 1:   // To insert a number in a Original Array
            
            printf("Enter the number to insert\n");
            scanf("%d",&num);
            printf("Enter the position to be inserted\n");
            scanf("%d",&position);
            for(int i=5;i>=position;i--)
            {
                if(i==position){                
                    ori_arr[i] = num;
                }
                else{
                    ori_arr[i+1] = ori_arr[i];
                }
            }
            // to display the new array
            printf("New Array \n");
            for(int j=0;j<=5;j++)
            {
                printf("%d ",ori_arr[j]);
            }
            
            break;

        case 2:  // To update a array
            
            printf("Enter a position to update a array\n");
            scanf(" %d",&position);
            printf("Enter a value to be updated to \n");
            scanf(" %d",&num);
            ori_arr[position] = num;

            // To display the new Array
            printf("New Array \n");
            for(int i=0;i<=4;i++)
            {
                printf("%d ",ori_arr[i]);
            }
            
            break;

        case 3:
            
            printf("Enter the index to be deleted\n");
            scanf(" %d",&position);
            printf("New Array");
            for(int i=position;i<=4;i++)
            {
                ori_arr[i] = ori_arr[i+1];
            }
            // To display new Array
            for(int j=0;j<4;j++)
            {
                printf("%d ",ori_arr[j]);
            }
            
            break;
        case 4:
            printf("\n");
            for(int i=0;i<5;i++){
                printf("%d ",ori_arr[i]);
            }
            
            break;
        case 5:
            
            printf("Enter a value to search \n");
            scanf(" %d",&num);
            int c=0;
            for(int i=0;i<5;i++)
            {
                if(ori_arr[i]== num)
                {
                    c=1;
                    break;
                }
            }
            if(c==1){
                printf("Founded");
            }
            else{
                printf("Not founded");
            }
            
            break;
        case 6:
            printf("Successfully exited");
            break;            
        
        default:
            printf("Invalid input");
        }

        
    } while (ch!=6);
    return 0;
    
    
}  