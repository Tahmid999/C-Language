#include<stdio.h>
int main()
{
    int num[10]={10,15,23,66,54,14,17,16,19,20},pos=-1,i,n;
    printf("enter which number you want to search : ");
    scanf("%d",&n);
    for ( i = 0; i < 10; i++)
    {
        if (n==num[i])
        {
            pos = i+1;
            break;
        } 
    }
    if (pos==-1)
    {
        printf("not found!!");
    }
    else
        printf("%d number found and position is : %d",n,pos);
    

    return 0;
}