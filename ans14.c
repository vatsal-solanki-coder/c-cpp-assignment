#include<stdio.h>
void main()
{
    float i,j,k,answer;
    printf("\nEnter three numbers::");
    scanf("%f%f%f",&i,&j,&k);
    answer = (i>j && i>k)?i:(j>k && j>i)?j:k;
    printf("Answer is::%f",answer);
}