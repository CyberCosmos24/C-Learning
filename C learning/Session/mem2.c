#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include <string.h>

int main()
{

    char *str;

    str=(char*)malloc(15);
    strcpy(str, "hello world");
    printf("String=%s , Address=%u \n", str,str);

    str=(char*)malloc(20);
    strcat(str, ".com");
    printf("String=%s , Address=%u \n", str,str);
    free(str);
    return 0;
}