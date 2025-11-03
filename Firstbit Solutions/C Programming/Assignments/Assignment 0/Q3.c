//write a C program to convert temperature from Celsius to Fahrenheit using the
//formula: F = (C *9/5)  + 32


#include <stdio.h>
void main() {
    float C = 25.0, F;
    F = (C * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2f\n", F);
    
}
