#include <stdio.h>
// no return type but whith argurmet
void sum (int a , int b){
  int result = a+b;
  printf("The sym is : %d", result);
}

// not return type no argurment
void greet(){
  printf("Hello C user");
}

// return type with parameter
int mean(int a, int b){
  int mean = (a+b)/2;
  return mean;
}

// return ntype no parameter 
int multi(){
  return 10 * 10;
  
}

int main(){
  sum(10,20);
  printf("\n ");
  greet();
  printf("\n");


  int result = mean(10,20);
  printf("the mean is :  %d", result);
  printf("\n");

  printf("\n");


  int data = multi();
  printf("The value is :  %d" ,  data);

  return 0;

}