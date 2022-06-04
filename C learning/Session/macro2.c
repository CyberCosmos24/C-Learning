// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <conio.h>
// #define PI 3.145

// int main() {
//     float radius,area;
//     printf("Enter the radius: ");
//     scanf("%f",&radius);
//     area=PI * radius * radius;
//     printf("Area:%.2f",area);
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// # define Area(a) (a*a)
// int main(){
//     int s1=10,area_of_square;
//     area_of_square=Area(s1);
//     printf("using macro find area");
//     printf("area:%d",area_of_square);
//         return 0;
// }

#include<stdio.h>
#include<conio.h>
int main()
{
    printf("macro in c:");
    char filename[]=  _FILE_ ;
    char date[] = _DATE_ ;
    char time[]= _TIME_ ;
    int line = _LINE_ ;
    int ansi =_STDC_ ;

    printf("file name is %s\n",filename);
    printf("Date is %s\n",date);
    printf("now time is :%s\n",time);
    printf("The current line number :%d\n",line);
    printf("Compilation success:%d\n",ansi);
    return 0;
}