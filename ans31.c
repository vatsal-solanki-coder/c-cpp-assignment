#include<stdio.h>
void main()
{
    int matrixOne[2][3],matrixTwo[2][3],i,j,matrixThree[2][3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter element[%d][%d]::",i+1,j+1);
            scanf("%d",&matrixOne[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter element[%d][%d]::",i+1,j+1);
            scanf("%d",&matrixTwo[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            matrixThree[i][j]=matrixOne[i][j]+matrixTwo[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",matrixThree[i][j]);
        }
        printf("\n");
    }
}