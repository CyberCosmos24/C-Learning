#include<stdio.h>
#include<conio.h>
void main()
{
    int value[5];
    int i;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&value[i]);
    }
    printf("Displaying numbers:\n");

    for(i=0;i<5;i++)
    {
        printf("%d\n",value[i]);
    }
}