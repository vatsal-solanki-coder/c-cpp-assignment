#include<stdio.h>
void main()
{
    float userInputOne,userInputTwo;
    int choice;
    printf("\nEnter two numbers::");
    scanf("%f%f",&userInputOne,&userInputTwo);
    printf("\nEnter choice::");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\n%f",(userInputOne+userInputTwo));
        break;

        case 2:printf("\n%f",(userInputOne-userInputTwo));
        break;

        case 3:printf("\n%f",(userInputOne*userInputTwo));
        break;

        case 4:printf("\n%f",(userInputOne/userInputTwo));
        break;

        default:printf("\nInvalid input.");
        break;
    }
}