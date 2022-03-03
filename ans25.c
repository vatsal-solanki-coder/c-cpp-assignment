#include<stdio.h>
void main()
{
    int numbers[10],i,sum=0;
    float avg=0;
    for(i=0;i<10;i++)
    {
        printf("\nEnter number[%d]::",i+1);
        scanf("%d",&numbers[i]);
        sum+=numbers[i];
    }
    avg=sum/10;
    printf("\nSum of numbers::%d",sum);
    printf("\nAvg of numbers::%0.2f",avg);
}