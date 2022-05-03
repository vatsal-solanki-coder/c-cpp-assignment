#include<stdio.h>
void main()
{
    int number[5],i,j,k;
    for(i=0;i<5;i++)
    {
        printf("\nEnter number::");
        scanf("%d",&number[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(number[i]>number[j])
            {
                k=number[i];
                number[i]=number[j];
                number[j]=k;
            }
        }
    }
    printf("2 smallest number in array is::%d",number[1]);
}