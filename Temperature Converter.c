/*Write a C program that converts a temperature in Celsius to Fahrenheit. The Celsius temperature should be stored in a float variable celsius, and the Fahrenheit equivalent should be printed using a single printf statement. The relation between the two scales is given as
fahrenheit = (celsius * 9/5) + 32 */

//code-
#include <stdio.h>

int main() {
    float farenheit,celsius;
	celsius=20.5;
	farenheit=(celsius*9/5) +32;
	printf("%f",farenheit);
	return 0;

}


