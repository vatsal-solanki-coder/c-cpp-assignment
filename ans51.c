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
    struct employeeInformation employeeOne;
    printf("\nEnter name::");
    gets(employeeOne.employeeName);
    fflush(stdin);
    printf("\nEnter age::");
    scanf("%d",&employeeOne.age);
    printf("\nEnter number::");
    scanf("%d",&employeeOne.employeeNumber);
    fflush(stdin);
    printf("\nEnter address::");
    gets(employeeOne.employeeAddress);
    printf("\n\t::Information::");
    printf("\nName::%s",employeeOne.employeeName);
    printf("\nAge::%d",employeeOne.age);
    printf("\nNumber::%d",employeeOne.employeeNumber);
    printf("\nAddress::%s",employeeOne.employeeAddress);
}