//7.Write a C program to convert given minutes into hours and remaining minutes.


#include <stdio.h>
void main() {
    int totalMinutes = 130;
    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;
    printf("%d minutes = %d hour(s) and %d minute(s)\n", totalMinutes, hours, minutes);
    
}
