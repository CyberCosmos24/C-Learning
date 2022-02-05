#include<stdio.h>
#include<conio.h>
void main()
{
int binary,decimal=0,base=1,remainder;
printf("Enter the binary number: ");
scanf("%d",&binary);
int temp=binary;


while(temp > 0)
{
    remainder=temp %10;
    decimal=decimal + remainder * base;
    temp=temp/10;
    base=base+2;
}
printf("The binary value: %d\n", binary);
printf("The decimal number: %d\n",decimal);

}


