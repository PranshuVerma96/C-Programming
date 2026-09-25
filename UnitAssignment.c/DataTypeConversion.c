#include <stdio.h>

int main() {
  // 1. EXPLICIT conversion (You manually forced the type using '(float)')
  int data = 15;
  printf("The original data is %d\n", data);
  float result = (float)data; 
  printf("The after converting data is %f\n", result);

  // 2. EXPLICIT type conversion (You manually forced it using '(int)')
  float data1 = 133.13;
  int data3 = (int)data1; 

  printf("The data is %d\n", data3);
  return 0;
}
