// count digit using iterative approach
#include <stdio.h>
void main() {
    int n, count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        while (n != 0) {
            n /= 10; 
            count++; 
        }
        printf("Number of digits: %d\n", count);
    }
}