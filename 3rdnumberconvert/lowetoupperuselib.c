#include<stdio.h>

int main() { 
   
   char lower,upper;
   printf("enter lower letter >> ");
   scanf("%c",&lower);
    upper = toupper(lower);
   printf("your letter is >> %c",upper);

    return 0;
} 