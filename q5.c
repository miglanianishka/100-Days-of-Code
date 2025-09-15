#include<stdio.h>
int main() {
    float celsius ;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9/ 5) + 32; 
    printf("Temperature in Fahrenheit: %f\n", fahrenheit);

    return 0;
}