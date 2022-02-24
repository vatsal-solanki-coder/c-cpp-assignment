#include<stdio.h>
void main()
{
    int number,largest=0,reminder=0;
    printf("\nEnter number::");
    scanf("%i",&number);
    while(number!=0)
    {
        reminder=number%10;
        if(largest<reminder)
        {
            largest = reminder;
        }
        number = number/10;
    }
    printf("\n%i",largest);
}