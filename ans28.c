#include<stdio.h>
void main()
{
    int numbers[5],i,smallNumber,arrayOfSmallNumber[5];
    for(i=0;i<5;i++)
    {
        printf("\nEnter number[%d]::",i+1);
        scanf("%d",&numbers[i]);
        if(smallNumber>numbers[i])
        {
            smallNumber=numbers[i];
            arrayOfSmallNumber[i]=smallNumber; 
        }
        else
        {
            arrayOfSmallNumber[i]=smallNumber;
        }
    }
    printf("\n::Array of small numbers::\n");
    for(i=0;i<5;i++)
    {
        printf("\nSmall number::%d",arrayOfSmallNumber[i]);
    }
    printf("\nSecond small number is::%d",arrayOfSmallNumber[1]);
}