#include<stdio.h>
#include<conio.h>
int num(int);
int fact(int n)
{
    int i,f=1;

    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
void main()
{
int num,factor;
printf("Enter a number to see if it is a factor:\n ");
scanf("%d",&num);
factor = fact(num);
printf("Factor of the number %d = %d\n",num,factor);


}
