#include<stdio.h>

int main() {

    int n[100]; //n[100] for number of char value.
    printf("enter ascii number >> ");
    scanf("%d",&n);
    printf("your ascii char is = %s",n); // %s for string + char, %c for only char.

    return 0;
}