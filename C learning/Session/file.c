#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    FILE *fptr;
    fptr=fopen("ajay.txt","w");
    if(fptr==NULL)
    {
        printf("Error");
        exit(1);
    }
    printf("Enter number: ");
    scanf("%d",&num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;


}