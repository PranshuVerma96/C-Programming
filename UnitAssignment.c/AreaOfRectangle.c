#include <stdio.h>
int main(){
  int length;
  printf("Enter the lenght : ");
  scanf("%d",&length);
  int width;
  printf("Enter the width : ");
  scanf("%d", &width);

  float result = (float)length*width;
  printf("the area is %2f\n" , result);


  int perimeter = 2*(length + width);
  printf("The perimeter of : %d" , perimeter);

  return 0;
}