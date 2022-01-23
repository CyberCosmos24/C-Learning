#include<stdio.h>
#include<conio.h>

void main()
{
    int num,rem,sum=0,temp;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(temp=num;num!=0;num=num/10)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);

    }
    if(sum==temp)
    {
        printf("%d is a armstrong number!",temp);
    }
    else
    {
        printf("%d is not a armstrong number!", temp);
    }
}