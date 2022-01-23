#include<stdio.h>
#include<conio.h>

void main()
{
    int num,rem,sum=0,temp;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;

    while(num!=0)
    {
        rem = num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }

    if(sum==temp)
    {
        printf("%d is a armstrong number",temp);
    }
    else
    {
        printf("%d is not a armstrong number",temp);
    }
}
