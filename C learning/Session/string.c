#include <string.h>
#include <stdio.h>
#include <conio.h>

        // void main()
        // {
        //     char name[20];
        //     printf("Enter your name: ");
        //     scanf("%s", &name);
        //     printf("Hi %s, welcome", name);
        // }



void main()
{
    char str[30];
    unsigned int len; 
    printf("Enter a string: ");
    gets(str);
    len=strlen(str);
    printf("Length of string [ %s ] is [ %d ]: ", str,len);
}
