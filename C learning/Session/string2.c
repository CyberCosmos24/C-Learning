#include <string.h>
#include <stdio.h>
#include <conio.h>
void main()
{
    char str[100];
    int l=0;
    printf("Find the length of a string:\n ");
    printf("Enter the string: ");
    fgets(str,sizeof str,stdin);
    while(str[l]!='\0')
    {
        l++;
    }
    printf("Length of the string is: %d\n" ,l-1);
}