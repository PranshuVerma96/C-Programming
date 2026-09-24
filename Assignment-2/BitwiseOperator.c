#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nBitwise AND (a & b) = %d", a & b);
    printf("\nBitwise OR (a | b) = %d", a | b);
    printf("\nBitwise XOR (a ^ b) = %d", a ^ b);
    printf("\nBitwise NOT (~a) = %d", ~a);
    printf("\nLeft Shift (a << 1) = %d", a << 1);
    printf("\nRight Shift (a >> 1) = %d", a >> 1);

    return 0;
}