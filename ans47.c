#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[50]; 
    printf ("\nEnter a string to be reversed: ");  
    scanf ("%s", str);    
    printf ("\nAfter the reverse of a string: %s ", strrev(str));  
    return 0;  
}  