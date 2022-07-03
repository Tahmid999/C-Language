#include<stdio.h>
int main() {
    int i;
    float f;
    double d;
    char c;
    printf("the value of int is = %d bytes\n",sizeof(i));
    printf("the value of float is = %d bytes\n",sizeof(f));
    printf("the value of double is = %d bytes\n",sizeof(d));
    printf("the value of char is = %d bytes",sizeof(c));
}