#include<stdio.h>
void change(int a){
  a = 20;
}
// there is not value change so it is caled call by value 
// there we pass the copy of the actual parameter in the function 
int main(){
  int value = 90;
  change(value);
  printf("The orignal value is: %d " ,  value);
}