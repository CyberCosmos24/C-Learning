#include<stdio.h>
#include<conio.h>
struct test
{
    char *v1;
    int v2;
    int v3;

};
int main()
{
    struct test result;
    
    result.v1 = "hello";
    result.v2 = 2;
    result.v3 = 17;

    printf("student name is %s he has %d tests and his age is %d", result.v1, result.v2, result.v3);
    



}