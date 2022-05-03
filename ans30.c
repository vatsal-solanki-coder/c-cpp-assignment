#include<stdio.h>
void main()
{
    int matrix[2][2];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\nEnter element[%d][%d]::",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\nElement[%d][%d] is::%d",i+1,j+1,matrix[i][j]);
        }
    }
}