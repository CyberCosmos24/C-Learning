#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    FILE *fptr1 , *fptr2;
    char ch , fname1[20] , fname2[20];
    printf("Copy your a file into another");
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    printf("Input the file: ");
    scanf("%s", fname1);
    fptr1 = fopen(fname1 , "r");
    if(fptr1 == NULL)
    {
        printf("Can not open the file");
        exit(0);
    }
    printf("Enter the file open name to open for writing: ");
    scanf("%s",fname2);
    fptr2 = fopen(fname2 , "w");
    if(fptr2 == NULL)
    {
        printf("Can not open the file");
        exit(0);

    }
    ch = fgetc(fptr1);
    while(ch !=EOF)
    {
        fputc(ch, fptr2);
        ch = fgetc(fptr1);
    }
    printf("\n Content copied to %s",fname2);
    fclose(fptr1);
    fclose(fptr2);
    

}