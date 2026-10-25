#include <stdio.h>

int main() {
    // printf("Hello world");
    int n;
    printf("Enter your first number : ");
    scanf("%d",&n);

    int m;
    printf("Enter your second number : ");
    scanf("%d",&m);

    int sum = n+m;
    printf(" The answer is %d", sum);

    return 0;
}