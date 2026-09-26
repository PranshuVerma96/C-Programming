#include<stdio.h>
int main(){
  int num;
  printf("Enter a numeber ");
  scanf("%d",&num);

  if(num %5==0){
    printf("the number is divisible by 5 : %d", num);
  }
else{
  printf("the given number is not divisible by 5");
}
return 0;
}