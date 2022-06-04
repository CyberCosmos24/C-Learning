#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[100],ch;
    int i,j,l;
    printf("Sort a sting array in ascending order");
    printf("Enter a string: ");
    fgets(str,sizeof str,stdin);
    l=strlen(str);

    for(i=1;i<l;i++)
        for(j=0;j < l-i;j++)
    if(str[j]>str[j+1])
    {
        ch=str[j];
        str[j]=str[j+1];
        str[j+1]=ch;
    
    }
printf("After sorting the sting appear like: \n");
printf("%s\n\n",str);

}