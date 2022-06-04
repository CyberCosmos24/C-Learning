#include <conio.h>
#include <stdlib.h>
#include<stdio.h>

int main()
{
    int *ptr,n1,n2;
    printf("Enter size: ");
    scanf("%d",&n1);

    ptr=(int*)malloc(n1*sizeof(int));
    printf("Address of the previous allocated memory:  \n");
    for(int i=0; i<n1; i++)
    {
        printf("%pc\n", ptr+i);
    }
    printf("Enter new size: ");
    scanf("%d",&n2);

    ptr=realloc(ptr, n2*sizeof(int));
    printf("Address of the new memory: \n");
    for(int i=0; i<n2; i++)
    {
        printf("%pc\n", ptr+i);
    }
    free(ptr);
    return 0;

}