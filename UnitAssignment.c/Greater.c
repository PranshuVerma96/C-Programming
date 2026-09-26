#include<stdio.h>
int main(){
  int num1 ;
  printf("Enter the first number: ");
  scanf("%d",&num1);

  int num2;
  printf("Enter the second number: ");
  scanf("%d",&num2);

  if(num1 > num2){
    printf("num1 is greater %d",num1);
  }
  else if(num2> num1){
    printf("num2 is greater %d", num2);
  }
  else{
    printf("Both numbers are equal");
  }

  return 0;
}