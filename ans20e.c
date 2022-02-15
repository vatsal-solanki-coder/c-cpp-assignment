#include<stdio.h>
void main()
{
    int i=0,j=1,add,k,l;
    printf("\nEnter number::");
    scanf("%i",&l);
    printf("\n%i",i);
    printf("\n%i",j);
    for(k=1;k<=l;k++)
    {
        add=i+j;
        printf("\n%d",add);
        i=j;
        j=add;
    }
}