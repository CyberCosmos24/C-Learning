#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[100];
    int l,i;
    
    printf("Input the sting");
    fgets(str, sizeof str,stdin );
    l=strlen(str);
    printf("The character of the reverse strings are\n"); 
    for(i=l;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");



}