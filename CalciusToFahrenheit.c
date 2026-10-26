#include<stdio.h>
int main(){
  printf("Enter the temperature in fahrenheit : ");
  float fahrenheit;
  scanf("%f", &fahrenheit);

  float celcius = ((fahrenheit - 32)*5/9);
  printf("temperature in celcus is : %.f", celcius );
  return 0;
}