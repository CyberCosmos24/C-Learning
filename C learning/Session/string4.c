#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    char str[100];
    int i = 0;
    printf("Sepprate the characters from the string\n");
    printf("Input the sting");
    fgets(str, sizeof str,stdin );
    printf("The character of the strings are\n");
    while(str[i] !='0')
    {
        printf("%c ",str[i]);
        i++;
    }
    printf("\n");



}