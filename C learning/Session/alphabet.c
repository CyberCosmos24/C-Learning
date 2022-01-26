#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    char input,alphabet='A';
    printf("Enter a uppercase character you want: \n");
    scanf("%c",&input);
    

    for(i=1;i<=(input-'A'+1);i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",alphabet);
        }
        alphabet++;
        printf("\n");
        
    }
}