/* Write the program to print the following pattern:
1  2    3     4   5     6
2  4    6     8   10   12
3  6    9    12   15   18
4  8    12   16   20   24
5  10   15   20   25   30
6  12   18   24   30   36
*/
#include <stdio.h>
int main()
{
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
        {
            printf("%d ",(i*j));
        }
        printf("\n");
    }
    return 0;
}
