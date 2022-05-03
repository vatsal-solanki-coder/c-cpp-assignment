#include<stdio.h>
struct studentInformation
{
    int rollNumber;
    int marks[3];
    int total;
    int percentage;
};
void main()
{
    struct studentInformation student[5];
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("\n\t::Information of student %d::",i+1);
        printf("\nRoll Number::");
        scanf("%d",&student[i].rollNumber);
        for(j=0;j<3;j++)
        {
            printf("\nEnter marks of subject %d::",j+1);
            scanf("%d",&student[i].marks[j]);
            student[i].total += student[i].marks[j]; 
        }
    }
    student[i].percentage=student[i].total/300;
    for(i=0;i<3;i++)
    {
        printf("\nRoll Number-->%d",student[i].rollNumber);
        for(j=0;j<3;j++)
        {
            printf("\nMarks of subject %d::%d",j+1,student[i].marks[j]);
        }
        printf("\nPercentage::%d",student[i].percentage);
    }
}