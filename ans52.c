#include<stdio.h>
struct employeeInformation
{
    int employeeNumber;
    char employeeName[50];
    char employeeAddress[200];
    int age;
};
void main()
{
    struct employeeInformation employee[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("\nEnter information of employee %d",i+1);
        printf("\nName::");
        gets(employee[i].employeeName);
        printf("\nAddress::");
        gets(employee[i].employeeAddress);
        fflush(stdin);
        printf("\nAge::");
        scanf("%d",&employee[i].age);
        printf("\nNumber::");
        scanf("%d",&employee[i].employeeNumber);
        fflush(stdin);
    }
    for(i=0;i<5;i++)
    {
        printf("\n\t::Information of employee %d::",i+1);
        printf("\nName-->%s",employee[i].employeeName);
        printf("\nAddress-->%s",employee[i].employeeAddress);
        printf("\nAge-->%d",employee[i].age);
        printf("\nNumber-->%d",employee[i].employeeNumber);
    }
}