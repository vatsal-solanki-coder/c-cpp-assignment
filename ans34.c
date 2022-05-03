#include<stdio.h>
void main()
{
    int i,j,matrix[2][2],maximum;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\nEnter element[%d][%d]::",i+1,j+1);
            scanf("%d",matrix[i][j]);
        }
    }
    maximum=matrix[0][0];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(matrix[i][j]>maximum)
            {
                maximum=matrix[i][j];
            }
        }
    }
    printf("\nMaximum element in matrix is::",maximum);
}