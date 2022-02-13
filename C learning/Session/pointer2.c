#include<stdio.h>
#include<conio.h>
void main()
{
    int fno,sno,*ptr1,*ptr2=&sno;
    printf("Find the maxium number between two numbers \n");
    printf("Enter the first number: ");
    scanf("%d",&fno);
    printf("Enter the second number: ");
    scanf("%d",&sno);
    if(*ptr1 > *ptr2) 
    {
        printf("%d is the maxium number",*ptr1);

    }
    else
    {
        printf("%d is the maxium number" ,*ptr2);
    }

}