//Write a C program to input marks of five subjects, find the total marks, and calculate the percentage.


#include <stdio.h>
void main() {
    int s1 = 80, s2 = 75, s3 = 90, s4 = 85, s5 = 88;
    int total = s1 + s2 + s3 + s4 + s5;
    int percentage = total / 5;
    printf("Total Marks = %d\n Percentage = %d\n", total, percentage);
    
}
