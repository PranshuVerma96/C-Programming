#include<stdio.h>
int main(){
  int number ;
  printf("Enter your number : ");
  scanf("%d",&number);

  if(number <=1){
    printf("Not prime");
    return 0;
  }

 int prime = 1;

  for(int i =2; i*i <= number; i++){
    if(number%i ==0){
      prime = 0;
      break;
    }
  }
  if(prime == 1){
    printf("The given number is prime : %d",number);
  }
  else{
    printf("The given number is not prime : %d", number);
  }
  return 0;

}