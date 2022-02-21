#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    char str[100]; 
    int i=0;

    printf("Seperate the individual character from a string \n");
    printf("Enter the string: ");
    fgets(str,sizeof str,stdin);
    printf("The character of the string are ");
    while(str[i]!='\0')
    { 
        printf("%c",str[i]);
        i++;
    }
    printf("\n");

}