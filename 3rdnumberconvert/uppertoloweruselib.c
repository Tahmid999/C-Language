#include<stdio.h>

int main() {

   char upper,lower;
   printf("enter upper letter >> ");
   scanf("%c",&upper);
   lower = tolower(upper);
   printf("your letter is >> %c",lower);

    return 0;
} 