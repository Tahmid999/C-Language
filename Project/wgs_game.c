#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int resproccess(char you, char comp)
{
    if (you==comp)
    {
        return 0;
    }

    if (you=='s' && comp=='w')
    {
        return 1;
    }
    else if (you=='w' && comp=='s')
    {
        return -1;
    }

    if (you=='g' && comp=='s')
    {
        return 1;
    }
    else if (you=='s' && comp=='g')
    {
        return -1;
    }

    if (you=='w' && comp=='g')
    {
        return 1;
    }
    else if (you=='g' && comp=='w')
    {
        return -1;
    }
    
}

int main()
{
    char you,comp;
    int result;
    int num;
    srand(time(0));
    num = rand()%100+1;

    if (num<33)
    {
        comp = 's';
    }
    else if (num>33 && num<66)
    {
        comp = 'g';
    }
    else
        comp = 'w';
    

        printf("enter your choise 's' or 'g' and 'w' >> ");
        scanf("%c",&you);

        result = resproccess(you,comp);

        if (result==0)
        {
        printf("Match Drow!!!\n");
        }
        else if (result==1)
        {
        printf("You Win!!\n");
        }
        else if (result==-1)
        {
        printf("You Lose!!\n");
        }
            
        printf("You chose %c and computer chose %c",you,comp);
            
        printf("\n"); 
    
    return 0;
}