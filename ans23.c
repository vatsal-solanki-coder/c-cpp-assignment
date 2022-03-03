#include<stdio.h>
void main()
{
    float numbers[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter number::");
        scanf("%f",&numbers[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nNumber::%f",numbers[i]);
    }
}