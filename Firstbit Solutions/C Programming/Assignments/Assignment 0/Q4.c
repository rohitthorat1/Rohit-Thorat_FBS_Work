//Write a C program to swap two numbers using a temporary third variable.


#include <stdio.h>
void main() {
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
}
