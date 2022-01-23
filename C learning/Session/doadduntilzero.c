#include<stdio.h>
#include<conio.h>
void main()
{
    double number , sum=0;
    do
    {
        printf("enter a number: ");
        scanf("%lf", &number);
        sum=sum+number;
    } while (number!=0.0);
    printf("Sum is = %.2lf",sum);
    
}