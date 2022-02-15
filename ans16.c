#include<stdio.h>
void main()
{
    float sub1,sub2,sub3,sub4,sub5,sum,percentage;
    printf("\nEnter marks of 5 subjects:");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    percentage=(100*sum)/500;
    if(percentage>75)
    {
        printf("\nDistinction.");
    }
    else if(percentage>60 && percentage<=75)
    {
        printf("\nFirst class.");
    }
    else if(percentage>50 && percentage<=60)
    {
        printf("\nSecond class.");
    }
    else if(percentage>35 && percentage<=50)
    {
        printf("\nPass class.");
    }
    else
    {
        printf("\nFail.");
    }
}