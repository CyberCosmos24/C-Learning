#include<stdio.h>
#include<conio.h>

int main() {
int x, y, temp;
printf("enter the first number: ");
scanf("%d", &x);
printf("enter the second number");
scanf("%d", &y);


temp = x;
x = y;
y = temp;
printf("\n After swaping the numbers are x= %d, y =%d", x, y);
return 0;

}
