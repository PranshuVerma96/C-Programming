#include<stdio.h>
void change(int *ptr){
  *ptr = 90;
}

int main(){
  int value = 30;
  change(&value);
  printf("The value is : %d", value);
}