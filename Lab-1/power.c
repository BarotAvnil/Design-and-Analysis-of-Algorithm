//x^y using iterative approach
#include <stdio.h>
void main() {
    int x, y, result = 1;
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    if (y < 0) {
        printf("Exponent should be a non-negative integer.\n");
    } else {
        for (int i = 0; i < y; i++) {
            result *= x;
        }
        printf("%d raised to the power of %d is: %d\n", x, y, result);
    }
}
