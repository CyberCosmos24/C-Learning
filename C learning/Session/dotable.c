#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1 , num, result;
    printf("Enter a number");
    scanf("%d", &num);
    do
    {
       result=num*i;
     //  printf("%d\n",result);
     printf("%dx%d=%d\n",num,i,result);
       i++;
    } while (i<=10);
    
}