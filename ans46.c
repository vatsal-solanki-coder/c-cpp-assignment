#include<stdio.h>
void sortArray(int n)
{
    int i,j,a,number[30];
    for(i=0;i<n;i++)
    {
        printf("\nEnter number::");
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(number[i]>number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
        {
            printf("%d\n", number[i]);
        }
}
void main()
{
    int n;
    printf("\nEnter number of elements::");
    scanf("%d",&n);
    sortArray(n);
}