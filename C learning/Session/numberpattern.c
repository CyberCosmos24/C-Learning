#include<stdio.h>
#include<conio.h>
void main()
{
    int rows,i,j;
    printf("Enter the number of rows:\n ");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
}