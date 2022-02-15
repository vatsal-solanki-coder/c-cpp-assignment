#include<stdio.h>
void main()
{
    float subject_1,subject_2,subject_3,subject_4,subject_5,sum,percentage;
    printf("\nEnter marks of 5 subject:");
    scanf("%f%f%f%f%f",&subject_1,&subject_2,&subject_3,&subject_4,&subject_5);
    sum=subject_1+subject_2+subject_3+subject_4+subject_5;
    percentage=(100*sum)/500;
    printf("\nPercentage:%f",percentage);
}