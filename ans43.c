#include<stdio.h>
void factorial(int number)
{
    int i,temp=1;
    for(i=number;i>1;i--)
    {
        temp = temp*i;
    }
    printf("\nAnswer is::%d",temp);
}
void main()
{
    int number;
    printf("\nEnter number::");
    scanf("%d",&number);
    factorial(number);
}