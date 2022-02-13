#include<stdio.h>
#include<conio.h>
int checkPrime(int n1)
{
    int count=0;
    for(int i=2;i<=n1/2;i++)
    {
        if(n1%i==0)
        {
            count=1;
            break;
        }
    
        
    }
    if(n1==1)
    
        count=1;
        return count;
    

}
void main()
{
    int n1;
    printf("Enter number: ");
    scanf("%d",&n1);
    if(checkPrime(n1)==0)
    {
        printf("%d is a prime number.",n1);
    }
    else
    {
        printf("%d is not a prime number.",n1);

    }

}