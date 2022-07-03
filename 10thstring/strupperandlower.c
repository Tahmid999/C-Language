#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s1[30];
    
    printf("enter upper string >> ");
    gets(s1);

    strlwr(s1);
    
    // strupr(s1); for upper

    printf("your lower string is = %s",s1);




    return 0;
}
