#include<stdio.h>
float addition(float x,float y)
{
    float answer;
    answer = x+y;
    printf("\nAnswer::%f",answer);
}
float substraction(float x,float y)
{
    float answer;
    answer = x-y;
    printf("\nAnswer::%f",answer);
}
float multiplication(float x,float y)
{
    float answer;
    answer = x*y;
    printf("\nAnswer::%f",answer);
}
float division(float x,float y)
{
    float answer;
    answer = x/y;
    printf("\nAnswer::%f",answer);
}
void main()
{
    float numberOne,numberTwo;
    printf("\nEnter number one::");
    scanf("%f",&numberOne);
    printf("\nEnter number two::");
    scanf("%f",&numberTwo);
    addition(numberOne,numberTwo);
    substraction(numberOne,numberTwo);
    multiplication(numberOne,numberTwo);
    division(numberOne,numberTwo);
}