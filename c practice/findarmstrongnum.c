#include<stdio.h>
int main()
{
    int initial,final,temp,rem,sum=0,i;
    printf("enter initial and final value : ");
    scanf("%d %d",initial,&final);
    for ( i = initial; i <= final; i++)
    {
        temp = i;
        while (temp!=0)
        {
        rem = temp%10;
        sum = sum + rem*rem*rem;
        temp = temp/10;
        }
        if (sum==i)
        {
            printf("%d\n",i);
        }
        
    sum =0;
    }
    
    return 0;
}