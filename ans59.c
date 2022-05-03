#include<stdio.h>
void main()
{
    FILE *fp;
    char data[255];
    fp = fopen("myfile.txt","r");
    while(fscanf(fp,"%s",data)!=EOF)
    {
        printf("%s",data);
    }
    fclose(fp);
}