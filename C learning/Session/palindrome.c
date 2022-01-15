//Program to find the number is palindrome or not. 
#include <stdio.h>
#include <conio.h>

void main() 
{
   int num, temp, rem, sum;
   sum = 0;
   printf("Enter the number: ");
   scanf("%d", &num);
   temp=num;

   while(num > 0) 
   {
       rem=num%10;
        sum=(sum*10)+rem;
       num=num/10;

    }
   if(temp==sum)
    {
       printf("%d is a palindrome number!",temp);
        
   }
   else
   {
       printf("%d is not a palindrome number!", temp);
   }
    
}





