#include<stdio.h>
int main()
{
    int n1,n2,n3,sum=0,i=1,j=2,k=3;
    printf("enter theree number : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("1*2*3+2*4*6+3*6*9.....+%d*%d*%d",n1,n2,n3);
    while (i <= n1 && j<=n2 && k<=n3)
    {
        sum= sum + i*j*k;
        i++;
        j+=2;
        k+=3;
    }
    printf(" = %d",sum);
    

    return 0;
}