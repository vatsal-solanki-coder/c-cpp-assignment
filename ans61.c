#include<stdio.h>
struct student
{
    int id;
    char name[30];

}s1;
void main()
{
    FILE *fp;
    fp = fopen("myfile.txt","a");
    printf("\nEnter student id::");
    scanf("%d",&s1.id);
    fprintf(fp,"\n id = %d",s1.id);
    fflush(stdin);
    printf("\nEnter student name::");
    gets(s1.name);
    fprintf(fp,"\n name = %s",s1.name);
    fclose(fp);
}
