//count digit using recursive approach
#include <stdio.h>
int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

void main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int digitCount = countDigits(n);
        printf("Number of digits: %d\n", digitCount);
    }

    return 0;
}
