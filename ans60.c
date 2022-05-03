#include<stdio.h>
void main()
{
    FILE *fp;
    char data[300];
    fp = fopen("mySecondFile.txt","w");
    fprintf(fp,"\nHello vatsal.");
    fclose(fp);
    fp = fopen("mySecondFile.txt","r");
    while(fscanf(fp,"%s",data)!=EOF)
    {
        printf("%s",data);
    }
    fclose(fp);
}