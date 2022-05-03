#include<stdio.h>
#include<string.h>
void main()
{
    char string[30];
    printf("\nEnter string::");
    gets(string);
    printf("\nString in lower case::%s",strlwr(string));
    printf("\nString in upper case::%s",strupr(string));
}