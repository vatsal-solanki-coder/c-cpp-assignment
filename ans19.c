#include<stdio.h>
void main()
{
    int choice;
    float pi=3.14;
    printf("\nEnter 1 for area of triangle.\nEnter 2 for area of rectangle.\nEnter 3 for area of circle.\nEnter choice::");
    scanf("%i",&choice);
    if(choice==1)
    {
        float base,height,answer;
        printf("\nEnter value of base and height::");
        scanf("%f%f",&base,&height);
        answer=(base*height)/2;
        printf("\nAnswer is %f.",answer);
    }
    else if(choice==2)
    {
        float width,height,answer;
        printf("\nEnter value of width and height::");
        scanf("%f%f",&width,&height);
        answer=width*height;
        printf("\nAnswer is %f.",answer);
    }
    else if(choice==3)
    {
        float radius,answer;
        printf("\nEnter value of radius::");
        scanf("%f",&radius);
        answer=pi*radius*radius;
        printf("\nAnswer is %f.",answer);
    }
    else
    {
        printf("\nInvalid input.");
    }
}