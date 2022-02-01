#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[10],i,n,sum=0, average;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    printf("Enter number %d : ",i+1);
    scanf("%d",&marks[i]);
    
    sum=sum+marks[i];
    }
    average=sum /n;
    printf("Average: %d",average);
}

