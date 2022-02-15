#include<stdio.h>
void main()
{
    int i,counter=0,number;
    printf("\nEnter number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            counter=counter+1;
        }
    }
    if(counter==2)
    {
        printf("\nprime number.");
    }
    else
    {
        printf("\nnot a prime number.");
    }
}