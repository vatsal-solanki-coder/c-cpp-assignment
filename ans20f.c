#include<stdio.h>
void main()
{
    int number,i;
    printf("\nEnter number::");
    scanf("%d",&number);
    for(i=1;i<=10;i++)
    {
        printf("\n%d*%d=%d",number,i,number*i);
    }
}