#include<stdio.h>
void main()
{
    float marks[5] = {45.45,55.23,56.78,45,68};
    int i;
    for(i=0;i<=4;i++)
    {
        printf("\nMarks::%.2f",marks[i]);
    } 
}