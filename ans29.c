#include<stdio.h>
void main()
{
    int i,position,number[5];
    for(i=0;i<5;i++)
    {
        printf("\nEnter number::");
        scanf("%d",&number[i]);
    }
    printf("\nEnter position::");
    scanf("%d",&position);
    printf("\nElement of position %d is::%d",position,number[position]);
}