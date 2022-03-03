#include<stdio.h>
void main()
{
    int numbers[10],i,oddNumbers=0,evenNumbers=0;
    for(i=0;i<10;i++)
    {
        printf("\nEnter number[%d]::",i+1);
        scanf("%d",&numbers[i]);
        if(numbers[i]%2==0)
        {
            evenNumbers++;
        }
        else
        {
            oddNumbers++;
        }
    }
    printf("\nEven numbers::%d",evenNumbers);
    printf("\nOdd numbers::%d",oddNumbers);
}