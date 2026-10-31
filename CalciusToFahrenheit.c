#include <stdio.h>

int main() {
float fahrenheit, celsius, fahrenheitValue;

// Fahrenheit to Celsius
printf("Enter the temperature in Fahrenheit: ");
scanf("%f", &fahrenheit);

celsius = (fahrenheit - 32) * 5 / 9;
printf("Temperature in Celsius: %.2f\n", celsius);

// Celsius to Fahrenheit

printf("Enter the temperature in Celsius: ");
scanf("%f", &celsius);

fahrenheitValue = (celsius * 9 / 5) + 32;

printf("Temperature in Fahrenheit: %.2f\n", fahrenheitValue);

return 0;


}
