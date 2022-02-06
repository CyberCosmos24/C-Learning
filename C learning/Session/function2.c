#include<stdio.h>
#include<conio.h>
int add(int,int);
void main()
{
int a,b;
printf("Enter first number");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);
printf("%d + %d = %d\n",a,b,add(a,b));
}
int add(int x,int y)
{
    return(x+y);
}