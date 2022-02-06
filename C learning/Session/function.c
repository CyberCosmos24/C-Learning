#include<stdio.h>
#include<conio.h>
int add(int x, int y)
{
    return(x+y);
}
void main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("%d + %d=%d\n",a,b,add(a,b));
}