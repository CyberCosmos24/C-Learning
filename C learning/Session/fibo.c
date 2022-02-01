#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    int t1=0,t2=1;
    int nextTerm=t1+t2;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("fibnacci series :%d,%d",t1,t2);
    for(i=3;i<=n;i++){
        printf("%5d",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;

    }
}