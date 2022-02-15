#include<stdio.h>
void main()
{
    int i,number,factorial=1;
    printf("\nEnter number::");
    scanf("%i",&number);
    for(i=1;i<=number;i++)
    {
        factorial=factorial*i;
    }
    printf("\n%i",factorial);
}