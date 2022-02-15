#include<stdio.h>
void main()
{
    float a;
    printf("\nEnter first number:");
    scanf("%f",&a);
    if(a==0)
    {
        printf("\nNot a positive or negative.");
    }
    else if(a>0)
    {
        printf("\nPositive number.");
    }
    else
    {
        printf("\nNegative number.");
    }
}