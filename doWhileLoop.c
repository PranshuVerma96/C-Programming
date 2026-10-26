#include <stdio.h>

int main() {
    int number;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    do {
       printf("%d \n", i*number);
       i++;
    } while (i<=10);

    return 0;
}