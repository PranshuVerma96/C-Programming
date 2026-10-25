#include<stdio.h>
int main(){
  printf("Enter number : ");
  int number;
  scanf("%d", &number);
  printf("the number is : %d",number );

  int fact = 1;
  int i =1; 

  while(i<=number){
    fact = fact * i;
    i++;
  }

  printf(" \n");
  printf("Factorial is : %d", fact);

return 0;  
}