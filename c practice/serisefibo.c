#include<stdio.h>
int main()
{
    int first=0,second=1,count=0,n,fibo;
    printf("enter n number : ");
    scanf("%d",&n);
    while (count<n)
    {
        if (count==0)
        {
            fibo = count;
        }
        else
        {
            fibo = first + second;
            first = second;
            second= fibo;
        }    
        printf("%d ",fibo);

        count++;
    }
    

    return 0;
}