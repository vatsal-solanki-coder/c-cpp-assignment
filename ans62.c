#include<stdio.h>
#define c 300000
#define name "vatsal solanki"
#define areaOfCircle(r) (3.14*r*r) 
void main()
{
    printf("\nSpeed of light::%d",c);
    printf("\nName::%s",name);
    float radius,answer;
    printf("\nEnter radius::");
    scanf("%f",&radius);
    answer = areaOfCircle(radius);
    printf("\nAnswer::%f",answer);
}