#include<stdio.h>
#include<conio.h>

void MulTable(int num, int i)
{
    printf("%d * %d=%d\n",num,i,num*i);
    if(i<10)
    return MulTable(num,i+1);
    }

    void main()
    {
        int num,i=0;
        printf("Enter a number: ");
        scanf("%d",&num);
        printf("Multiplication Tableof %d is", num);
        MulTable(num,1);
    }