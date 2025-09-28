//Variable Swap Challenge
//Write a C program that swaps the values of two integer variables, a =5 and b = 10, and prints their new values using a single printf statement with a space between them

//code-
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    // Complete the code
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    return 0;
}