#include<stdio.h>
#include<conio.h>
void main()
{
    int var=10;
    int *p;
    p=&var;
    printf("Address of var is :%p\n",&var);
    printf("Address of var is :%p\n",p);
    printf("Address of var is :%d\n",var);
    printf("Address of var is :%d\n",*p);
    printf("Address of var is :%d\n",p);
    printf("var is %d",*(&var));
    printf("Address of var is :%p\n",&p);
}
