#include<stdio.h>
#include<conio.h>
int main() {
    int x,y;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second numbers: ");
    scanf("%d", &y); 
    x = x * y;
    y = x / y;
    x = x / y;
    printf("After swapping two numbers x = %d, y = %d",x , y);
    

}