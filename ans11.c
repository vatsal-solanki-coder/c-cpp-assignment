#include<stdio.h>
void main()
{
    int year;
    printf("\nEnter year:");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("\nleap year.");
    }
    else
    {
        printf("\nnot a leap year.");
    }
}