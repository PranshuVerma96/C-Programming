#include <stdio.h>

int main() {
    int result;

    result = 10 + 5 * 2;

    printf("Result of 10 + 5 * 2 = %d\n", result);

    result = (10 + 5) * 2;

    printf("Result of (10 + 5) * 2 = %d\n", result);

    result = 20 / 5 * 2;

    printf("Result of 20 / 5 * 2 = %d\n", result);

    result = 10 - 5 - 2;

    printf("Result of 10 - 5 - 2 = %d\n", result);

    return 0;
}