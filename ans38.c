#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* copyString(char s[])
{
 
    char *s2, *p1, *p2;
    s2 = (char*)malloc(20);
    p1 = s;
    p2 = s2;
    while (*p1 != '\0') 
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
    return s2;
}
int main()
{
    char s1[20] = "vatsal solanki";
    char* s2;
    s2 = copyString(s1);
    printf("%s", s2);
    return 0;
}