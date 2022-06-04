#include<stdio.h>
#include<conio.h>
struct numbers
{
    int num1,num2;
};
int main(){
    struct numbers  s1 =
    {
        .num1=23, 
        .num2=25
    };
    struct numbers s2 ={.num2=30};

    printf("num1:%d,num2:%d\n",s1.num1,s1.num2);
    printf("num:%d",s2.num2);
     return 0;


}#include<stdio.h>
#include<conio.h>
union job1
{
    char name[32];
    float salary;
    int empno;
}ujob;

struct structjob
{
    char name[32];
    float salary;
    int empno;
}sjob;

int main()
{
    printf("size of union=%d bytes",sizeof(ujob));
    printf("\nsize of structure=%d bytes",sizeof(sjob));
    return 0;
}
