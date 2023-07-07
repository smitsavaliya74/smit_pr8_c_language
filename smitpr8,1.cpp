// Write a Program to find the length of a string using a Pointer.


#include <stdio.h>
void main() {
    char str[100], *ptr;
    int length;
    length = 0;
    printf("Enter any string: ");
    gets(str);
    ptr = str;
    while ( *ptr != '\0') {
        length++;
        ptr++;
    }
    printf("The length of the string is: %d", length);
    
}
