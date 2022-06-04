#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generateRandomNumber(int a)
{
    srand(time(NULL));
    return rand()%a;

}
int greater(int a, int b)
{
    if(a==b)
    {
        return -1;
    }
    else if(a=='r' && b=='s')
    {
        return 1;
    }
    else if(b=='r' && a =='s')
    {
        return 0;
    }
        else if(a=='p' && b=='r')
    {
        return 1;
    }
        else if(b=='p' && a=='r')
    {
        return 0;
    }
    else if(b=='s' && a=='p')
    {
        return 1;
    }
}
void main()
{
    int ps=0,cs=0,temp;
    char dict[]={'r','p','s'};
    char playerChar, compChar;
    printf("Welcome to rock paper scissors");
    for(int i=0;i < 3 ; i++)
    {
        printf("Press 1 rock, 2 for paper, 3 for scissors: ");
        printf("Players turn");
        scanf("%d", &temp);

        playerChar=dict[temp -1];
        printf("Option chosen: %c ",playerChar);

        //Computer 
        printf("Press 1 rock, 2 for paper, 3 for scissors:");
        printf("Computers turn");
        temp=generateRandomNumber(3)+1;
        compChar=dict[temp -1];

    }
}