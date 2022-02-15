#include<stdio.h>
void main()
{
    float numberOne,numberTwo,numberThree;
    printf("\nEnter three numbers:");
    scanf("%f%f%f",&numberOne,&numberTwo,&numberThree);
    if(numberOne==numberTwo && numberTwo==numberThree && numberThree==numberOne)
    {
        printf("\nAll numbers are same.");
    }
    else if(numberOne>numberTwo)
    {
        if(numberOne>numberThree)
        {
            printf("\nnumberOne.");
        }
    }
    else if(numberTwo>numberThree)
    {
        if(numberTwo>numberOne)
        {
            printf("\nnumberTwo");
        }
    }
    else if(numberThree>numberOne)
    {
        if(numberThree>numberTwo)
        {
            printf("\nnumberThree");
        }
    }
    else
    {
        printf("\nWrong input.");
    }
}