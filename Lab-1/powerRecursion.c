//x^y using recursive approach
#include <stdio.h>
int power(int x, int y) {
    if (y == 0) {
        return 1; 
    }
    return x * power(x, y - 1); 
}
void main() {
    int x, y;
    printf("Enter the base (x): ");
    scanf("%d", &x);
    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    if (y < 0) {
        printf("Exponent should be a non-negative integer.\n");
    } else {
        int result = power(x, y);
        printf("%d raised to the power of %d is: %d\n", x, y, result);
    }
}