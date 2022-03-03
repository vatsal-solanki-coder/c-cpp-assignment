#include<stdio.h>
void main()
{
    int numbers[10],i,max=0,j=0;
    for(i=0;i<10;i++)
    {
        printf("\nEnter number[%d]::",i+1);
        scanf("%d",&numbers[i]);
    }
    while(j!=9)
    {
        if(max<numbers[j])
        {
            max=numbers[j];
        }
        j++;
    }
    printf("\nMax number is::%d",max);
}