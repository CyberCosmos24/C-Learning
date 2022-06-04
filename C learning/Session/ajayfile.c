#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    FILE *fptr;
    char ch;
    int wrd=1, character=1;
    char fname[20];
    printf("Count the number of words and characters in the file.\n");
    printf("Input the file name: ");
    scanf("%s",&fname);
    fptr=fopen(fname,"r");
    if(fptr==NULL)
    {
        printf("Error: Could not open");
    }
    else
    {
        ch=fgetc(fptr);
        printf("The cotent of the file %s are:",fname);

        while(ch!=EOF)
        {
            printf("%c",ch);
            if(ch==' ' || ch=='\n')
            {
                wrd++;
            }
            else
            {
                character++;
            }
            ch=fgetc(fptr);
        }
        printf("Number of words in the file %s are %d \n ",fname,wrd-1);
        printf("Number of characters in file %s are : %d \n",fname,character-1);
    }
}