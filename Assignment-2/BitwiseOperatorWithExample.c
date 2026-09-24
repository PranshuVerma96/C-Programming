#include <stdio.h>

int main() {
    int a = 10, b = 5;

    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    printf("Bitwise AND (a & b) = %d\n", a & b);
    printf("Bitwise OR (a | b) = %d\n", a | b);
    printf("Bitwise XOR (a ^ b) = %d\n", a ^ b);
    printf("Bitwise NOT (~a) = %d\n", ~a);
    printf("Left Shift (a << 1) = %d\n", a << 1);
    printf("Right Shift (a >> 1) = %d\n", a >> 1);

    return 0;
}