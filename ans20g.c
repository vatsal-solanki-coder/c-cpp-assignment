#include<stdio.h>
void main()
{
    int number,rev=0,reminder;
    printf("\nEnter number::");
    scanf("%d",&number);
    while(number!=0)
    {
        reminder=number%10;
        rev=rev*10+reminder;
        number=number/10;
    }
    printf("\n%d",rev);
}