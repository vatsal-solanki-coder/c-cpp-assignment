#include<stdio.h>
void main()
{
    float i,j,k,answer;
    printf("\nEnter three numbers::");
    scanf("%f%f%f",&i,&j,&k);
    if(i>=j)
    {
        if(i>k)
        {
            printf("%f",i);
        }
    }
    if(j>=k)
    {
        if(j>i)
        {
            printf("%f",j);
        }
    }
    if(k>=i)
    {
        printf("%f",k);
    }
}