#include<stdio.h>
#include<math.h>
void squareRoot(float x)
{
    float answer;
    answer = pow(x,0.5);
    printf("\nSquare Root of %f is::%f",x,answer);
}
void cubeRoot(float x)
{
    float answer;
    answer = pow(x,0.333333333);
    printf("\nCube Root if %f is::%f",x,answer);
}
void main()
{
    float number;
    printf("\nEnter number::");
    scanf("%f",&number);
    squareRoot(number);
    cubeRoot(number);
}