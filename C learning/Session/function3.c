#include<stdio.h>
#include<conio.h>
void table(int);
void main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("\n multiplication tabel for %d is :\n", num);
    table(num);

}

void table(int num)
{
    int i, result;
    for(i=1; i<=10; i++)
    {
        result=num*i;
        printf("%d * %d = %d\n",num,i,result);
    }
}
