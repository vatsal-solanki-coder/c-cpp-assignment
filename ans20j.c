#include<stdio.h>
void main()
{
    int number,reminder,sum;
    printf("\nEnter number::");
    scanf("%d",&number);
    reminder=number%10;
    number=number/10;
    while(number>=10)
    {
        number=number/10;
    }
    sum=reminder+number;
    printf("\n%d",sum);
}