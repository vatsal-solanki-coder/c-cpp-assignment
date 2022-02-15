#include<stdio.h>
void main()
{
    int number,i,sum=0;
    printf("\nEnter number::");
    scanf("%d",&number);
    while(number>0)
    {
        i=number%10;
        sum=sum+i;
        number=number/10;
    }
    printf("\nAnswer is %d.",sum);
}