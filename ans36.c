#include<stdio.h>
void main()
{
    char string[30];
    int size,i;
    printf("\nEnter string::");
    gets(string);
    size = sizeof(string)/sizeof(int);
    while(i!=size-1)
    {
        i++;
    }
    printf("\nLength of string is::%d",i);
}