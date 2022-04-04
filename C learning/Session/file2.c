#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr;
    int num;
    if((fptr=fopen("ajay.txt", "r"))==NULL)
    {
        printf("Error");
        exit(1);
    }
    fscanf(fptr, "%d", &num);
    {
      printf("Value of n=%d", num);  
      fclose(fptr);
             
    }
}