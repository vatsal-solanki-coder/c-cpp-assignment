#include<stdio.h>
void main()
{
    int numbers[5],i,smallest;
    for(i=0;i<5;i++)
    {
        printf("\nEnter number[%d]::",i+1);
        scanf("%d",&numbers[i]);
        if(smallest>numbers[i])
        {
            smallest=numbers[i];
        }
    }
    printf("\nSmallest number::%d",smallest);
}