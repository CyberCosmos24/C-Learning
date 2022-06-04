#include<stdio.h>
#include<conio.h>
struct numbers 
{
    int num1,num2,num3;
};
int main()
{
    struct numbers s1 = 
    {
        .num1=23,
        .num2=25
    };
    struct numbers s2 ={.num2=30};
    printf("num1 = %d, num2 = %d\n", s1.num1, s1.num2);
    printf("num:%d\n", s2.num2);
    return 0;
}